#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int countAlpha=0,countDigit=0,countSpecial=0;
    for(int i=0;i<s.size();i++){
        if(int(s[i])>=65&&int(s[i])<=91){
            countAlpha++;
        }
    }
    cout<<countAlpha<<"\n";
    return 0;
}