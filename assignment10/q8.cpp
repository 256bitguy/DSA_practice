/*
Write a function to calculate the number of combinations one can make from n items
and r selected at a time*/
#include<iostream>
using namespace std;

long long int factorial(long long int n){
  long long int a=1;
   for(int i=1;i<=n;i++){
    a*=i;
   }
   return a;
}

int main(){
 long long int n,r;
 cin>>n>>r;
 long long int a,c;
 a=factorial(n);
 
 c=factorial(n-r);
 a=a/(c);
 cout<<a<<"\n";
    return 0;
}
 