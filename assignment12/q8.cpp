/*
Write a recursive function to print binary of a given decimal number
*/
#include<iostream>
using namespace std;
 void fun(int binary,int a=2){
    if(binary==0) return ;
    cout<<(binary%2);
    fun(binary/2);
 }
 int main(){
    int a;
    cin>>a;
    fun(a);
    return 0;
 }