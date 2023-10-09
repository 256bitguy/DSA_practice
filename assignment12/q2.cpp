/*
Write a recursive function to print first N natural numbers in reverse order
*/
#include<iostream>
using namespace std;

void printR(int n){
    if(n==0) return ;
    cout<<n<<"\n";
    printR(n-1);
    

}
int main(){
    int n;
    cin>>n;
    printR(n);
    return 0;
}