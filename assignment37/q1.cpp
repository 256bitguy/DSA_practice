//Declare a vector with Initialization and print the elements.
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v={ 1,2,3,4,5};
    for(auto i: v){
        cout<<i<<"\n";
    }
    return 0;
}