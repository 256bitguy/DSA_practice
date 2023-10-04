/*write a program to print the following pattern
* * * * *
* * * * 
* * * 
* * 
* 
*/ 
#include<iostream>
using namespace std;

int main(){
    int a=5;
    for(int i=0;i<5;i++){
        for(int j=0;j<a;j++){
            cout<<"* ";
        }
        a--;
        cout<<"\n";
    }
    return 0;
}
/*
#include<iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 4; j > i; j--) {
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}


*/