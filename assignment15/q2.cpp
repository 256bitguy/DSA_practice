//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<iostream>
#include<limits.h>
using namespace std;
    int smallest(int A[],int size){
        int m=INT_MAX;
        
    for(int i=0;i<size;i++){
        if(A[i]<m)m=A[i];
    }
    return m;
    }

    int main(){
        int A[]={1,5,6,4,456,57,534,6546};
        int size=sizeof(A)/sizeof(A[0]);
        int result=smallest(A,size);
        cout<<result<<"\n";
    return 0;
    }