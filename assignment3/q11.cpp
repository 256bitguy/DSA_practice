#include<bits/stdc++.h>
using namespace std;


int main(){
    int a[5],flag=0,falg=0;
    for(int i=0;i<5;i++){
        cin>>a[i];
    if(a[i]<33) flag=1;
    if(a[i]>100) falg=1;
    }
 if(flag) cout<<"the candidate is fail in one of the subject\n";
    if(falg) cout<<"the number entered in one of the subject is out of range\n";
    return 0;
}