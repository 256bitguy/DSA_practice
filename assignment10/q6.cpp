/*
write a function to calculate the factorial of a number
*/
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
 long long int a,b;
 cin>>a;
 b=factorial(a);
 cout<<b<<"\n";
    return 0;
}
/*
For example, if you're using a 32-bit integer data type, the maximum value you can 
represent is 2^31 - 1, which is 2,147,483,647. If you try to calculate the factorial
 of a number that exceeds this value,
 you will run into overflow issues, and the result will be incorrect.*/