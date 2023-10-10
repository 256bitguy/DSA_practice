//merge two list 
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1={2,4,5,6,7,8},l2={9,8,7,6,5,4};
    l1.merge(l2);
    for(int i: l1){
        cout<<i<<" ";
    }
    return 0;
}