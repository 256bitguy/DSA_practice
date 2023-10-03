#include<bits/stdc++.h>
using namespace std;


int main(){
    int a;
    cin>>a;
    cout<<(a&1)<<"\n";
    if((a&1)) cout<<"this number is odd\n";
    else cout<<"this number is even\n";
    return 0;
}