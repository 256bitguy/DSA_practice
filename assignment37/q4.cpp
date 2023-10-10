//4. Write a program to Copy one vector’s elements to another vector
#include<iostream>
#include<vector>
using namespace std;

void copyVector(vector<int> v1,vector<int> v2){
     v2=v1;
     for(auto a:v2){
        cout<<a<<" ";
     }
}
int main(){
    vector<int> v1,v2;
    for(int i=0;i<10;i++){
        int a;
        cin>>a;
        v1.push_back(a);
    }
    copyVector(v1,v2);
    return 0;
}