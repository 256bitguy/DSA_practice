#include<iostream>
using namespace std;

int main(){
    //------------variables-declaration-----------//
    string sentence;
    int sizeOfSentence,countVowel=0;
    

    //----------------input----------------------//
     cin>>sentence;
    

    //-----------------logic---------------------//
     sizeOfSentence=sizeof(sentence)/sizeof(sentence[0]);

     for(int len=0;len<sizeOfSentence;len++ ){
        if(sentence[len]=='A'||sentence[len]=='E'||sentence[len]=='I'||sentence[len]=='O'||sentence[len]=='U'||sentence[len]=='a'||sentence[len]=='e'||sentence[len]=='i'||sentence[len]=='o'||sentence[len]=='u'){
            countVowel++;
        }
     }
     cout<<countVowel<<"\n";
     

    return 0;
}