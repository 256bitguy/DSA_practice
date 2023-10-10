// Given a string S containing letters and ‘#‘. The ‘#” represents a backspace. The task
// is to print the new string without ‘#‘. String after processing backspace characters
// using deque
// Examples:
// Input : S = "abc#de#f#ghi#jklmn#op#"
// Output : abdghjklmo
// Input : S = "##iNeuron##Education##hub#"
// Output : iNeurEducatihu
#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main(){
      string S="##iNeuron##Education##hub#";
      deque<char> ch;
      for(auto i: S){
        if(i=='#') {
         if(ch.empty()) continue;
        ch.pop_back();
        }
        else ch.push_back(i);

      }
      for(char i: ch){
        cout<<i;
      }
      cout<<"\n";

    return 0;
}