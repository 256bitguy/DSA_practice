//Write a function to sort an array of any size. (TSRS)
#include<iostream>
using namespace std;
void sortedArray(int A[],int size){
    
    int small=A[0];
    for(int i=0;i<size;i++){
        small=A[i];
        for(int j=i;j<size;j++){
                if(A[j]<small){
                    int temp=A[j];
                    A[j]=small;
                    A[i]=temp;
                }
        }
    }
    
}
int main(){
        int A[]={324,345,645,34,234,543,45};
        int size=sizeof(A)/sizeof(A[0]);
        sortedArray(A,size);
        for(int i:A){
            cout<<i<<" ";
        }
        cout<<"\n";
}