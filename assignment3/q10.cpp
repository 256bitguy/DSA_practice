#include<bits/stdc++.h>
using namespace std;


int main(){
    int cost_price,selling_price;
    cin>>cost_price>>selling_price;
    int profit=0,loss=0;
    if(cost_price>selling_price) {
        loss=cost_price-selling_price;
        cout<<"loss percentage is equal to "<<(loss*100)/cost_price;
        }
    else if(cost_price<selling_price) {
        profit=selling_price-cost_price;
         cout<<"profit percentage is equal to "<<(profit*100)/cost_price;
}
    
    return 0;
}