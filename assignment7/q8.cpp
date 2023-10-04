//Write a program to find next Prime number of a given number
#include<bits/stdc++.h>
using namespace std;
     bool isprime(int a){
        int tot=0;
        for(int i=2;i<=sqrt(a);i++){
            if(a%i==0) {tot++; break;}
        }
        if(tot==0) return 1;
        return 0;
     }
int main(){
    int n;
    cin>>n;
    while(!(isprime(n+1))){
        n++;

    }
    cout<<n+1<<"\n";
        
    return 0;
}