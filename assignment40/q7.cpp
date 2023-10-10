//Return the first element and last element of the deque container.
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d={1,2,3,4,5};
    cout<<d.front()<<"  "<<d.back();
    return 0;
}