// Write a recursive function to print octal of a given decimal number
#include<iostream>
using namespace std;
 void fun(int octal){
    if(octal==0) return ;
    cout<<(octal%8);
    fun(octal/8);
 }
 int main(){
    int a;
    cin>>a;
    fun(a);
    return 0;
 }