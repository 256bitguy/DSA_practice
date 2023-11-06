//Write a function to find the greatest number from the given array of any size. (TSRS)
#include<iostream>
#include<limits.h>
using namespace std;
    int greatest(int A[],int size){
        int m=INT_MIN;
        
    for(int i=0;i<size;i++){
        if(A[i]>m)m=A[i];
    }
    return m;
    }

    int main(){
        int A[]={1,5,6,4,456,57,534,6546};
        int size=sizeof(A)/sizeof(A[0]);
        int result=greatest(A,size);
        cout<<result<<"\n";
    return 0;
    }

    /*
    The code you provided has an issue related to the size calculation of the array A. In C++, when you pass an array to a function, you lose its size information, so sizeof(A) in the greatest function will not give you the correct size. To fix this issue,
     you should also pass the size of the array to the function.*/