/*
Write a recursive function to print first N even natural numbers
*/
#include<iostream>
using namespace std;

void printR(int n,int a){
    if(n==0) return ;
    cout<<a<<"\n";
    printR(n-1,a+2);
    

}
int main(){
    int n;
    cin>>n;
    printR(n,2);
    return 0;
}