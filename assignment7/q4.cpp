//Write a program to calculate HCF of two numbers
#include<bits/stdc++.h>
using namespace std;

    int hcf(int a,int b){
        while(b%a!=0){
            int temp=a;
            a=b%a;
            b=temp;
        }
        // if(b%a>0) cout<<1<<"\n";
        return a;
    }
int main(){
        int a,b;
        cin>>a>>b;
        int h=hcf(a,b);
        cout<<h<<"\n";
    return 0;
}