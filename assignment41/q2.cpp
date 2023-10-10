//2. Create a stack of int type, and find the top most element in a stack.
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(1);
    st.push(13);
    st.push(14);
    st.push(15);
    cout<<st.top()<<"\n";
    return 0;
}