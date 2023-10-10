//Write a program to find sum of vector elements
#include<iostream>
#include<vector>
using namespace std;
int sum(vector<int> v){
    int sum=0;
    vector<int>:: iterator it;
    for(it =v.begin();it!=v.end();it++){
        sum+=(*it);
    }
    return sum;
}
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int totatl=sum(v);
    cout<<" the sum of elements inside the vector is "<<totatl<<"\n";
    return 0;
}