#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b<c || a+c<b || b+c<a){
        cout<<"the trianlge is not a valid trianngle\n";
    }
    else{
        cout<<" the triangle is a valid triangle\n ";
    }
    return 0;
}