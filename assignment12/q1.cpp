/*
Write a recursive function to print first N natural numbers
*/
#include<iostream>
using namespace std;

void printN(int n){
    if(n==0) return ;
    printN(n-1);
    cout<<n<<"\n";
}
int main(){

int n;
cin>>n;
printN(n);
    return 0;
}