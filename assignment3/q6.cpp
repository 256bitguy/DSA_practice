#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b;
    cin>>a>>b;
    if(a<b){
        if(a==b)cout<<a<<"\n";
        else cout<<(b-1)<<"\n";
    }
    else{
         if(a==b)cout<<a<<"\n";
        else cout<<(a-1)<<"\n";
    }
    return 0;
}