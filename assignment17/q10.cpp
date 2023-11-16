#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string s;
    cin>>s;
    unordered_map<int,int>umap;
    for(int i=0;i<s.size();i++){
        umap[int(s[i])]++;
    }
    for(auto i:umap){
        cout<<"the frequency of the alphabet '"<<char(i.first)<<"' is given as ->"<<i.second<<"\n";
    }
    return 0;
}