/*
Write a function to print first N odd natural numbers. (TSRN)
*/
#include<iostream>
using namespace std;

void oddNatural(int n){
 for(int i=1;i<2*n+1;i+=2){
    cout<<i<<"\n";
 }
}
int main(){
    int n;
    cin>>n;
   oddNatural(n);
     return 0;
}