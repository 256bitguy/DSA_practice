//Write a program to check whether two given numbers are co-prime numbers or not
#include<bits/stdc++.h>
using namespace std;
 

  int hcf(int a,int b){
    while(b%a!=0){
        int temp=a;
        a=b%a;
        b=temp;
    }
    return a;
  }
int main(){
        int a,b;
        cin>>a>>b;
        int h=hcf(a,b);
        if(h==1) cout<<" the numbers are co-prime\n";
        else cout<<"the numbers are not co-prime\n";
    return 0;
}