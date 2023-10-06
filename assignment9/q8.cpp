/*
Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.
*/
#include<iostream>
using namespace std;

int main(){
    int integer;
    cin>>integer;
    switch((integer/(-1*integer))){
        case -1:cout<<(-1*integer)<<"\n";
               break;

        case 1:cout<<integer<<"\n";
                break;
    }
    return 0;
}