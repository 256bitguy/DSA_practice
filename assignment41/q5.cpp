//Create stack1 of int type, and create another stack of the same type with name
// stack2 and copy all the elements of stack1 into stack2 in the same order.
#include<iostream>
#include<stack>
using namespace std;
int main(){
 stack<int> s1,s2,s3;
 s1.push(1);   
 s1.push(11);   
 s1.push(13);   
 s1.push(14);   
 s1.push(16);   

  while(!s1.empty()){
    int a=s1.top();
    s1.pop();
    s3.push(a);
  }
  while(!s3.empty()){
    int a=s3.top();
    s3.pop();
    s2.push(a);
  }
  while(!s2.empty()){
    int a=s2.top();
    s2.pop();
     cout<<a<<" ";
  }
    return 0;
}