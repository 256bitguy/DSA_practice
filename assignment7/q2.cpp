#include<bits/stdc++.h>
using namespace std;

int main(){
        long long int k=1,j=1,n;
        cin>>n;
        long long int A[n];
        A[0]=1;
        A[1]=1;
        if(n==1) cout<<1<<"\n";
        if(n==2) cout<<1<<"\n";
        if(n>2){
            for(int i=1;i<=n-2;i++){
           long long int third=k+j;
           A[i+1]=third;
            k=j;
            j=third;
        }
        for(auto l: A){
            cout<<l<<" ";
        }
        cout<<"\n";
        }
    return 0;
}
//1 1 2 3 5 8 13 21