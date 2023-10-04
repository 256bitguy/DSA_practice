//Write a program to print all Prime numbers between two given numbers
#include<bits/stdc++.h>
using namespace std;
 bool isprime(int a){
     
    int tot=0;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0) {
        
            tot++;
           break;
        }
        
    }
    if(tot==0) return 1;
    return 0;
 }
int main(){
        int a,b;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(isprime(i)){ cout<<i<<" ";}
        }
    return 0;
}