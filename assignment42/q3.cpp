//Create a map, insert some pairs and print all elements in reverse order using rbegin
// and rend function.
#include<iostream>
#include<map>
 
using namespace std;
int main(){
    map<int,int> m;
    pair<int,int> p1;
    for(int i=0;i<5;i++){
    cout<<"enter a first value\n";
    int a1;
    cin>>a1;
    p1.first=a1;
    cout<<" enter the second value\n";
    cin>>a1;
    p1.second=a1;
    m.insert(p1);
   }
   map<int,int>::reverse_iterator it;
for(it=m.rbegin();it!=m.rend();it++){
    cout<<it->first<<" "<<it->second<<" \n";
}
    return 0;
}