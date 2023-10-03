#include<iostream>
using namespace std;

int sumOdd(int n,int a){
    int sum=0;
    if(n==0) return 0;
    sum=a+sumOdd(n-1,a+2);
     return sum;
}

int main(){
    int ten=10,result;
    result=sumOdd(ten,1);
    cout<<result<<"\n";
    return 0;
}