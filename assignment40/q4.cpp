//Returns a constant iterator pointing to the first element of the container, that is, the
// iterator cannot be used to modify, only traverse the deque.
#include<iostream>
#include<deque>
using namespace std;
int main(){
     deque<int> d={1,2,3,4,5,6,8};
     deque<int>:: reverse_iterator it=d.rbegin();
      

    return 0;
}