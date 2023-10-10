//Declare a vector without initialization, insert some elements and print
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vt;
    vt.push_back(1);
    vt.push_back(2);
    vt.push_back(3);
    vt.push_back(4);
    vt.push_back(5);
    for(auto i: vt){
        cout<<i<<"\n";
    }
    return 0;
}