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
    int a;
    cin>>a;
    int arms=armstrong(a);
    if(a==arms) cout<<" the number is a armsstrong number\n";
    else cout<<" the number is not a armsstrong number\n";
        
    return 0;
}