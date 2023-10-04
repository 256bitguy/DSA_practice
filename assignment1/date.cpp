#include<iostream>
 
using namespace std;
int main(){
    cout<<"enter the date in format DD/MM/YYYY\n";
    string s;
    cin>>s;
    cout<<"DATE: DAY:"<<s[0]<<s[1]<<", MONTH:"<<s[3]<<s[4]<<", YEAR:"<<s[6]<<s[7]<<s[8]<<s[9]<<"\n";
    cout<<"enter the time in format HH:MM\n";
    cin>>s;
    cout<<s[0]<<s[1]<<"hours and"<<s[3]<<s[4]<<"minutes \n";
    return 0;
}