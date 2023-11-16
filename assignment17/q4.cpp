#include<iostream>
using namespace std;
int main(){
    //------------variables-declaration-----------//
    string sentence;
    int sizeOfSentence;
    

    //----------------input----------------------//
     cin>>sentence;
    

    //-----------------logic---------------------//
    sizeOfSentence=sizeof(sentence)/sizeof(sentence[0]);
    for(int i=0;i<sizeOfSentence;i++){
        sentence[i]=char(sentence[i]|' ');
    }
    cout<<sentence<<"\n";
    return 0;
}