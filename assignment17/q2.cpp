#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int count=0;
    int size=sizeof(s)/sizeof(s[0]);
    for(int i=0;i<size;i++){
        if(s[i]==c)count++;
    }
    cout<<count<<"\n";
    return 0;
}