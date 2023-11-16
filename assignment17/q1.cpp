// Write a program to calculate the length of the string.
#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int len=0;
    while(s[len]!='\0'|| s[len]==' '){len++;}
    cout<<len<<"\n";
    // char c='q';
    // cout<<char(c&'_');    
    return 0;
}