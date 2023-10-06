/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    char c;
    cin>>c;
    switch(c){
        case 'a': cout<<a+b<<"\n";
                 break;
        case 'b': cout<<a-b<<"\n";
                 break;
        case 'c': cout<<a*b<<"\n";
                 break;
        case 'd': cout<<a/b<<"\n";
                 break;
         default: break;
                 
    }
    return 0;
}