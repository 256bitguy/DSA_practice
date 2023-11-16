#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int size=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<size;i++){
        s[i]=char(s[i]&'_');
    }
    cout<<s<<"\n";
    return 0;
}