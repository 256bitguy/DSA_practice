//Input and add elements to a list C++ STL
#include<iostream>
#include<list>
using namespace std;
int main(){
        list<int> li;
        int k;
        cout<<"how many times you want to add the elements in the list\n";
        cin>>k;
        for(int i=0;i<k;i++){
            int a;
            cin>>a;
            li.push_back(a);
        }
        for(const int a:li){
            cout<<a<<"  ";
        }

}