/*
Program to Convert even number into its upper nearest odd number
Switch Statement.
*/
#include<iostream>
using namespace std;

int main(){

     int number;
     cin>>number;
     switch(number%2){
        case 0:cout<<number+1<<"\n";
                break;
        case 1:cout<<number<<"\n";
                break;
     }
    return 0;
}