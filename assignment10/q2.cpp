/*
Write a function to calculate simple interest. (TSRS)
*/
#include<iostream>
using namespace std;

int simpleInterest(int time,int rate,int principal){
    return (principal*rate*time)/100;

}

int main(){
    int time,rate,principle,interest;
    cin>>time>>rate>>principle;
    interest=simpleInterest(time,rate,principle);
    cout<<interest;
    return 0;
}