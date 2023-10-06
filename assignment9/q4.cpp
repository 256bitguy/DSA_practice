#include<bits/stdc++.h>
using namespace std;

int main() {
    int A[3];

    while (true) {
        char ch;
        cout << "Enter the three sides of the triangle: ";
        cin >> A[0] >> A[1] >> A[2];
            sort(A, A + 2);
        cout << "Now enter the option you want to operate on these three numbers:\n";
        cout << "a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n";
        cout << "b. Check whether a given set of three numbers are lengths of sides of a right-angled triangle or not\n";
        cout << "c. Check whether a given set of three numbers are equilateral triangle or not\n";
        cout << "d. Exit\n";
        cin >> ch;

        if (ch == 'd') 
            break;

        switch(ch) {
            case 'a':if ((A[0] == A[1] && A[0] != A[2]) || (A[1] == A[2] && A[0] != A[2]) || (A[0] == A[2] && A[1] != A[0])) {
                    cout << "The given sides of the triangle make it an isosceles triangle.\n";
                }else{
                    cout<<" the triangle is not an isoscles triangle\n";
                }
                break;
            

            case 'b':  if ((A[0]*A[0]) + (A[1]*A[1]) == (A[2]*A[2])) {
                    cout << "The given sides of the triangle make it a right-angled triangle.\n";
                }else{
                    cout<<" the trianlge is not a right angled traingle\n";
                }
                break;
            

            case 'c': if (A[0] == A[1] && A[0] == A[2]) {
                    cout << "The given sides of the triangle make it an equilateral triangle.\n";
                }else {
                    cout<<" the trianlge is not an equilateral\n";
                }
                break;
            
        }
    }

    return 0;
}
