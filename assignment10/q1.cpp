/*
Write a function to calculate the area of a circle. (TSRS)
*/
#include<iostream>
using namespace std;

int area(int r){
    const int  PI=3.14;
    int area=PI*r*r;
    return area;
}
int main()
{
    int radius;
    cin>>radius;
    cout<<area(radius);
    return 0;
}