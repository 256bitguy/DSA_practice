//Write a program to Push and print elements in a float vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
     vector<float> v;
     v.push_back(1.2);
     v.push_back(2.4);
     v.push_back(4.5);
     v.push_back(6.7);
     v.push_back(7.6);
     for(auto i: v){
        cout<<i<<"\n";
     }

     return 0;
}