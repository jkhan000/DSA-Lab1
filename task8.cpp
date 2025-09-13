#include <iostream>
#include <string>
using namespace std;

int findSubstring(string text, string pattern) {
    if (pattern.empty()) {
        cout << "Empty pattern" << endl;
    }; // empty pattern case

    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) {
            return i; // found at position i
        }
    }
    return -1; // not found
}

int main() {
    string text, pattern;

    cout << "Enter text: ";
    getline(cin, text);

    cout << "Enter pattern: ";
    getline(cin, pattern);

    int pos = findSubstring(text, pattern);

    if (pos == -1)
        cout << "Pattern not found" << endl;
    else
        cout << "Pattern found at index " << pos << endl;

    return 0;
}
