//Find largest and smallest elements in a vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> smallBig(vector<int> vec){
    vector<int> v1;
    sort(vec.begin(),vec.end());
    v1.push_back(vec[0]);
    v1.push_back(vec[vec.size()-1]);
    return v1;
}

int main(){
    vector<int> v1,v2;
     v1.push_back(6);
     v1.push_back(4);
     v1.push_back(3);
     v1.push_back(67);
     v1.push_back(9);
     v1.push_back(78);
     v1.push_back(56);
     v2=smallBig(v1);
     cout<<v2.at(0)<<" "<<v2.at(1);
    return 0;
}