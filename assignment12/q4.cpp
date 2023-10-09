/*
Write a recursive function to print first N odd natural numbers in reverse order
*/
#include<iostream>
using namespace std;

void printR(int n){
      if(n<1) return ;
    int a;
    a=n*2-1;
    cout<<a<<"\n";
    printR(n-1);
    

}
int main(){
    int n;
    cin>>n;
    printR(n);
    return 0;
}