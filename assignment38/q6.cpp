//Get the first and last element of the list C++ STL
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l={2 ,3,4,5,6,7,8};
    cout<<l.front()<<" "<<l.back()<<"\n";
    return 0;
}