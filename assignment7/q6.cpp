//Write a program to print all Prime numbers under 100
#include<bits/stdc++.h>
using namespace std;
    
    int isprime(int a){
        int tot=0;
        for(int i=2;i<=sqrt(a);i++){
                if(a%i==0) {tot++; break;}
        }
        if(tot==0) return 1;
    return 0;
    }
int main(){
    for(int a=2;a<=100;a++){
        if(isprime(a)) {cout<<a<<" ";}
    }
    
    
        
    return 0;
}