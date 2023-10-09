/*
Write a recursive function to print squares of first N natural numbers
*/
#include<iostream>
using namespace std;
void printS(int n,int a){
      a+=n*n;
    if(n==0) {
        cout<<a<<"\n";
        return ;}

     printS(n-1,a);
      
}
int main(){
    int a;
    cin>>a;
    printS(a,0);
    return 0;
}