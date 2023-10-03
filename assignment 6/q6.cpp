#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=n+1;
    int factorial=1;
    while(--n){
        factorial*=n;
    }
    cout<<factorial<<"\n";
    return 0;

}