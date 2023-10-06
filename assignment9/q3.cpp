/*
Write a program which takes the day number of a week and displays a
unique greeting message for the day.
*/
#include<iostream>
using namespace std;

 int main(){

    int n;
    cin>>n;
    switch(n){
        case 1: cout<<" hello!!!1 greetings of the day  this is monday today\n";
                break;

        case 2: cout<<" hello!!!1 greetings of the day  this is Tuesday today\n";
                break;

        case 3: cout<<" hello!!!1 greetings of the day  this is wednesday today\n";
                break;

        case 4: cout<<" hello!!!1 greetings of the day  this is Thursday today\n";
                break;

        case 5: cout<<" hello!!!1 greetings of the day  this is friday today\n";
                break;

        case 6: cout<<" hello!!!1 greetings of the day  this is saturday today\n";
                break;

        case 7: cout<<" hello!!!1 greetings of the day  this is Sunday today\n";
                break;
    }
    return 0;
 }