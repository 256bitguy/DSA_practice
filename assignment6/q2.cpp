#include<iostream>
using namespace std;
int main(){
     int n,sum=0;;
     cin>>n;

     for(int i=2;i<=2*n;i+=2){
        sum+=i;
        cout<<i<<"\n";
     }
     cout<<sum<<"\n";
    
    return 0;

}