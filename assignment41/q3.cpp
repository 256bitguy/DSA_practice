//Create a stack, and implement main operations like push(), pop(), peek(), empty()
//and size().
#include<iostream>
#include<stack>
using namespace std;
int main(){
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  cout<<st.top()<<"\n";
  st.pop();
  st.pop();
  st.push(2);st.push(23);
  cout<<st.top()<<"\n";
  cout<<st.size()<<"\n";
    return 0;
}