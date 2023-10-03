#include<iostream>
using namespace std;
int main(){
    int monthNumber;
    cin>>monthNumber;
    switch(monthNumber){
        case 1: cout<<"In January the total number of days are 31\n";
         break;
         case 2: cout<<"In Feburary the total number of days are 28\n";
         break;
         case 3: cout<<"In March the total number of days are 31\n";
         break;
         case 4: cout<<"In april the total number of days are 30\n";
         break;
         case 5: cout<<"In May the total number of days are 31\n";
         break;
         case 6: cout<<"In June the total number of days are 30\n";
         break;
         case 7: cout<<"In July the total number of days are 31\n";
         break;
         case 8: cout<<"In August the total number of days are 30\n";
         break;
         case 9: cout<<"In september the total number of days are 31\n";
         break;
         case 10: cout<<"In october the total number of days are 30\n";
         break;
         case 11: cout<<"In November the total number of days are 31\n";
         break;
         case 12: cout<<"In December the total number of days are 30\n";
         break;
    }
    return 0;
}