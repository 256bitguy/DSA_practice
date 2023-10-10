//Returns a reverse iterator which points to the last element of the deque (i.e., its
//reverse beginning).
#include<iostream>
#include<deque>
using namespace std;
int main(){
     deque<int> d={1,2,3,4,5,6,8};
     deque<int>:: reverse_iterator it;
     it=d.rbegin();
     cout<<*it;

    return 0;
}