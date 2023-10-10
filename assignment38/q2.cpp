//Assign the elements to the list (different methods) - Example of list::assign() | C++
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1,l2;
    l2.push_back(4);
    l2.push_front(3);
    l2.push_front(2);
    l2.push_front(1);
    l2.push_back(5);
    l1.assign(l2.begin(),l2.end());
    for(auto A: l1){
        cout<<A<<" ";
    }
    return 0;

}