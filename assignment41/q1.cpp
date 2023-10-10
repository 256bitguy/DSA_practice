//1. Create a stack of int type, push 5 elements in it and print it on the console screen
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    while(!st.empty()){
        int a=st.top();
        cout<<a<<"\n";
        st.pop();
    }
    return 0;

}