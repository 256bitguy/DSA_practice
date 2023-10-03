//Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<bits/stdc++.h>
using namespace std;

int main(){
        long long int k=1,j=1,n;
        cin>>n;
        
         
        if(n==1) cout<<"yes"<<"\n";
        if(n==2) cout<<"yes"<<"\n";
        if(n>2){
            int i=1,flag=0;
            while(1){
           long long int third=k+j;
           k=j;
            j=third;
            if(third>=n) {

                if(third==n) cout<<"yes\n";
                if(third>n) cout<<"No\n";
                break;
            }
            
        }
        
        }
    return 0;
}
//1 1 2 3 5 8 13 21