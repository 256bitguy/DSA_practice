#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int factor=0;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0)factor++;
    }
    if(factor>2)cout<<"number is not prime\n";
    else{ cout<<"number is  prime\n";}
    
    return 0;

}