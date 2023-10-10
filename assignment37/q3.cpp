//Write a function to print the element of a vector and take input from the user.
#include<iostream>
#include<vector>
using namespace std;

void printElements(vector<int> v){
    for(auto i: v){
        cout<<i<<" ";
    }
}
int main(){
    cout<<"enter the size of vector\n";
    vector<int> vt;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<" enter the number to be added\n";
        int a;
        cin>>a;
        vt.push_back(a);
    }
    printElements(vt);
    return 0;
}