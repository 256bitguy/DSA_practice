//1. Write a program which takes the month number as an input and display number of days in that month.
#include<iostream>
using namespace std;

 int main(){
    int n;
    cin>>n;
     switch(n){
        case 1: cout<<31<<"\n";
                break;
        case 2: cout<<28<<"\n";
                break;
        case 3: cout<<31<<"\n";
                break;
        case 4: cout<<30<<"\n";
                break;
        case 5: cout<<31<<"\n";
                break;
        case 6: cout<<30<<"\n";
                break;
        case 7: cout<<31<<"\n";
                break;
        case 8: cout<<31<<"\n";
                break;
        case 9: cout<<30<<"\n";
                break;
        case 10: cout<<31<<"\n";
                break;
        case 11: cout<<30<<"\n";
                break;
        case 12: cout<<31<<"\n";
                break;                
     }
    return 0;
 }