//Write a recursive function to print reverse of a given number
#include<iostream>
using namespace std;
void reverseNumber(int n){
    if(n==0) return ;
    cout<<n%10;
    reverseNumber(n/10);
}
int main(){
    int a;
    cin>>a;
    reverseNumber(a);
    return 0;
}