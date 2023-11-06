//1. Create a map, insert at least 5 pairs of keys and values and print it.
#include<iostream>
#include<map>
 
using namespace std;
int main(){
    map<int,int> m;
    
    m.insert({2,3} );
    m.insert({1,3} );
    m.insert({4,3} );
    m.insert({4,39} );
    m.insert({5,3} );
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<"\n";
        
    }
    cout<<m.count(4);
    return 0;
}