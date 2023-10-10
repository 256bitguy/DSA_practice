//Iterate a list in reverse order C++ STL
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l1={1,2,3,4,5,6,7};
  
    
    for(  list<int>::reverse_iterator it=l1.rbegin();it!=l1.rend();it++){
        cout<<*it<<"\n";
    }
    // it--;
    // cout<<*it<<"\n";
    return 0;
}