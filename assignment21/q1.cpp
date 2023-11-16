//Define a structure Employee with member variables id, name, salary
#include<iostream>
using namespace std;

struct Employee{
    int id;
    int salary;
    string name;

};

int main(){
    struct Employee e1;
    e1.id=1;
    e1.name="vivek";
    cout<<e1.id<<" His name is"<<e1.name<<"\n";
    return 0;
}