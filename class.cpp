#include <iostream>
using namespace std;

void subsequences(string s, string ans, int i) {
    if (i == s.length()) {
        if (ans != "")
            cout << ans << endl;
        return;
    }

    // take current character
    subsequences(s, ans + s[i], i + 1);

    // Don't take 
    subsequences(s, ans, i + 1);
    
}

int main() {
    string s = "abc";

    subsequences(s, "", 0);

    return 0;
}