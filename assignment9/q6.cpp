/*
Program to check whether a year is a leap year or not. Using switch
statement
*/
#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;
    switch((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        case 0: cout<<" this is a leap year\n";
           break;

           default : cout<<" this is not a leap year\n";
    }
    return 0;
}