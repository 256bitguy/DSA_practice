/*
5.Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    switch(n){
        case 1 : cout<<"good\n";
           break;

        case 2: cout<<"better\n";
           break;
        case 3: cout<<" best\n";
            break;
         default : cout<<" invalid\n";

    }
    return 0;
}