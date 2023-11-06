//Create a map, where insert keys and values as string type and integer type
// respectively and print it on the screen
#include<iostream>
#include<map>
 
using namespace std;
int main(){
    map<string,int> m;
    m["abc"]=1;
    m["bbc"]=2;
    m["cbc"]=4;
    m["aac"]=6;
    m["aba"]=7;
    m["cac"]=5;
    
    for(auto i: m){
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}