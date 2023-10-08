/*
Write a function to print first N natural numbers (TSRN)
*/

#include<iostream>
using namespace std;
void natural(int n){
 for(int i=1;i<=n;i++){
    cout<<i<<"\n";
 }
}
int main(){
    int n;
    cin>>n;
    natural(n);
     return 0;
}