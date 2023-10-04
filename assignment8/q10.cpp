#include<bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {  // Corrected loop condition
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}

/*Write a program to draw the following patterns:
*
* *
* * *
* * * *
* * * * *
*/