#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cout << "Enter string of even length: ";
    cin >> s;
    cout << endl;

    int size = s.length();
    if (size % 2 != 0) {
        cout << "Pls enter even length string" << endl;
    }
    else {
        // Reverse only the first half: from index 0 to size/2
        reverse(s.begin(), s.begin() + size / 2);
        cout << "Half reverse string is: " << s << endl;
    }

    return 0;
}