#include<bits/stdc++.h>
using namespace std;
// a, b , c 
//a>b a>c  --->a


int main(){
    int a ,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c));
    
    return 0;
}