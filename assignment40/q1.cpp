//Inserts an element. And returns an iterator that points to the first of the newly inserted
//elements.

#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d={1,2,3,4,5,6};
    deque<int>:: iterator it=d.insert(d.begin(),0);
    
    for(int a: d){
        cout<<a<<"\n";
    }
    cout<<"The iterating point at the beginning of the deque is "<<*it<<"\n";

    return 0;
}