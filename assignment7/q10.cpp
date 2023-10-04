//Write a program to print all Armstrong numbers under 1000
#include<bits/stdc++.h>
using namespace std;
        int armstrong(int a){
            vector<int> v;
            int ab=a;
            while(ab){
                v.push_back(ab%10);
                ab/=10;
            }
            int sum=0;
            for(auto i:v){
                sum+=(i*i*i);
            }
            return sum;
        }
int main(){
        for(int i=1;i<1000;i++)
        {
            if(i==armstrong(i))cout<<i<<" ";
        }
    return 0;
}