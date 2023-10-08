/*
Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0.
*/
#include<iostream>
using namespace std;

bool isEven(int n){
    if(n&1) return 0;
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isEven(n)) cout<<" the number entered is even\n";
    else cout<<" the number is an odd number\n";
    return 0;
}