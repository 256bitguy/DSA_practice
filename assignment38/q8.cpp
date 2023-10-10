// Remove all occurrences of an element and remove set of some specific from the list
// C++ STL
#include<iostream>
#include<list>
using namespace std;
int main(){
    cout<<" enter the number you want to remove from the list\n";
    int n;
    cin>>n;
    list<int> l1={4, 4, 4, 5, 6 ,3, 2, 6, 76, 45, 3, 23 ,23 ,21 ,23};
     l1.remove(n);
     for(const int i: l1){
        cout<<i<<" \n";
     }

    return 0;
}