#include<iostream>
using namespace std;
int main(){
    int A[5][5]={{1,1,0,0,0},
                 {1,1,0,0,1},
                 {1,0,0,0,0},
                 {1,1,1,1,0},
                 {0,0,0,0,1}},max=-1,row;
    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=A[i][j];
        }
        if(sum>max){
            max=sum;
            row=max*(i+1);
        }
    }
    cout<<row/max<<"\n";
    return 0;
}