#include<iostream>
using namespace std;

  void reverseStr(int size,char s[]){
    for(int i=0;i<size/2;i++){
        char c=s[i];
        s[i]=s[size-1-i];
        s[size-1-i]=c;
    }
  }
int main(){
    // string s;
    // cin>>s;
    // int size=sizeof(s)/sizeof(s[0]);
    int size;
    cin>>size;
    char s[size];
    cin>>s;
    reverseStr(size,s);
    cout<<s;

    return 0;
}