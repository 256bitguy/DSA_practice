/*
C program to find all roots of a quadratic equation using switch case
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    // Coefficients of the quadratic equation: ax^2 + bx + c = 0
    double a, b, c;

    cout << "Enter the coefficients (a, b, c): ";
    cin >> a >> b >> c;

    // Calculate discriminant
    double discriminant = b * b - 4 * a * c;

    // Initialize variables for roots
    double root1, root2;

    // Determine the case value based on the discriminant
    int caseValue;
    if (discriminant > 0) {
        caseValue = 1;  // Two distinct real roots
    } else if (discriminant == 0) {
        caseValue = 2;  // One real root (double root)
    } else {
        caseValue = 3;  // Complex roots
    }

    // Calculate roots based on conditions using switch statement
    switch (caseValue) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two distinct real roots:\nRoot 1 = " << root1 << "\nRoot 2 = " << root2 << endl;
            break;
        case 2:
            root1 = root2 = -b / (2 * a);
            cout << "One real root (double root):\nRoot = " << root1 << endl;
            break;
        case 3:
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(abs(discriminant)) / (2 * a);
            cout << "Complex roots:\nRoot 1 = " << realPart << " + " << imaginaryPart << "i\n";
            cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
            break;
        default:
            cout << "Invalid input!";
            return 1;
    }

    return 0;
}
