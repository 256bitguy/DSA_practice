#include<bits/stdc++.h>
using namespace std;
int main(){
    char c,d;
    cin>>c;
    int ascii_value=static_cast<int>(c);// make this effective 
    cout<<ascii_value<<endl;
    int a=int(d);
    if(a>=48 && a<=57) cout<<" the character entered is a digit "<<a-48<<"\n";
    if(a>=97 && a<=122) cout<<" the character entered is a lowerCase letter "<<tolower(c)<<"\n";
    if(a>=65 && a<=90) cout<<" the character entered is a upperCase letter "<<toupper(c)<<"\n";
    
    return 0;
}
//48-57 digit
//97-122 alphabet
//65-90 uppercase