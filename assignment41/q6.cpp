//Reverse a string using a stack.
// Example:
// Input: str = "Reverse me"
// Output: em esreveR
#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s="Reverse me";
    stack<char> st;
    for(auto a:s){
        st.push(a);
    }
    while(!st.empty()){
        char c=st.top();
        cout<<c;
        st.pop();
    }
    return 0;
}