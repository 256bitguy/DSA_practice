#include<iostream>
using namespace std;
 long long int hcf(int a,int b){
    if(b%a==0) return a;
    return hcf(b%a,a); 
 }
int main(){
   long long  int a,b;
    cin>>a>>b;
    long long int h=hcf(a,b);
    long long int answer=(a*b)/h;
    cout<<answer<<"\n";


    
    return 0;

}