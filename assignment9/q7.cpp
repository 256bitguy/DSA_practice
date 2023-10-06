/*
Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include<iostream>
using namespace std;

int main(){
    int unit, caseFollow;
    double billAmount;
    cin>>unit;
    if(unit<=50){
        caseFollow=1;
    }else if(unit>50 && unit <=150){
        caseFollow=2;
    }else if(unit>150 && unit<=250){
        caseFollow=3;
    }else{
        caseFollow=4;
    }

    switch(caseFollow){
        case 1: billAmount=unit*(0.50);
                        break;
        case 2: billAmount=unit*(0.75);
                        break;
        case 3: billAmount=unit*(1.20);
                        break;
        default:  billAmount=unit*(1.50);
                        break;
               
    }
    billAmount+=((0.2)*billAmount);
    cout<<billAmount<<"\n";
    return 0;
}