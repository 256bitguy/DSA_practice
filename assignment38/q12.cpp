//Assign a list with array elements C++ STL
#include<iostream>
#include<list>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    list<int> l(a,a+sizeof(a)/sizeof(a[0]));
    for(int i: l){
            cout<<i<<"\n";
    }
    return 0;

}