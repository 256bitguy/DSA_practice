//Write a program to reverse vector elements
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1={1,2,3,4,5,6},v2;
    
    vector<int>::iterator it;
    // for(it=v1.end()-1;it!=v1.begin()-1;it--){
    //     v2.push_back(*it);
    // }
     
    for( it =v2.begin();it!=v2.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}