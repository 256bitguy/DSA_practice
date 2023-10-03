#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0,i=-1,ni=n;
    while(ni%10){
        ni/=10;
        i++;
    }
    while(n%10){
        sum+=(pow(10,i)*(n%10));
        n=n/10;
i--;
    }
    cout<<sum<<"\n";
    return 0;

}