/*
write a function to check whether a given number contains a given digit or not
*/
#include<iostream>
using namespace std;

bool isPresent(int n,int a){
    while(n){
        if(n%10==a) return true;
        n/=10;
    }
    return false;
}
int main(){
    int number,present;
    cin>>number>>present;
    if(isPresent(number,present)) cout<<"This number contains the digit in it\n";
    else cout<<"This number does not contain the digit in it\n";
    return 0;
}