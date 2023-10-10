// Reverse the Words of a String using Stack.
// Example:
// Input: str = “I Love To Code”
// Output: Code To Love I
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s = "I Love To Code";
    stack<string> st;

    string s1 = "";
    for (char c : s) {
        if (c != ' ')
            s1 += c;
        if (c == ' ' || c == '\0') {
            if (!s1.empty()) { // Check if s1 is not empty before pushing
                st.push(s1);
                s1 = "";
            }
        }
    }
    while (!st.empty()) {
        string ch = st.top();
        st.pop();
        cout << ch << " ";
    }
    return 0;
}
