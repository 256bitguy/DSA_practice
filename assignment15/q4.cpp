//Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
#include<iostream>
using namespace std;
int main(){

    int A[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int n;
    cin>>n;
    int B[n];
    int size=sizeof(A)/sizeof(A[0]);
    for(int i=0;i<size;i++){
        if(i<n)B[i]=A[i];
        else{
            A[i-n]=A[i];
        }
    }
    int k=0;
    for(int i=size-n;i<size;i++){
       A[i]=B[k];
       k++;
    }
    for(int i:A){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}