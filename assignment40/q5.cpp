//Returns the maximum number of elements that a deque container can hold.
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d={1,2,3,4,5,6};
    cout<<d.max_size()<<"\n";
    return 0;
}