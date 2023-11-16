#include<iostream>
using namespace std;

int main(){
    int sum=0;
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
          cout<<"{"<<A[i][j]<<"}";
            sum+=A[i][j];
        }
    }
    cout<<sum<<"\n";
    return 0;
}