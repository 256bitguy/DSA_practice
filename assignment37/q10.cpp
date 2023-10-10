//Write a program to check whether an element exists in a vector or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={ 2,4 ,41,45,65,7,45,5,78,8};
    cout<<" enter the number to check it in vector v\n";
    int a,flag=0;
    cin>>a;
    for(auto i: v){
        if(a==i){cout<<" number found int vector v\n";
        flag=1;
        break;}
    }
    if(!flag){
        cout<<" did not found\n";
    }
    return 0;
}