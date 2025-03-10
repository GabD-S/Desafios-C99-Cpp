#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isAlphabetical(const string& s) {
    int n = s.length();
    string alphabet = s;
    sort(alphabet.begin(), alphabet.end());

    for (int i = 0; i < n; ++i) {
        if (alphabet[i] != 'a' + i) {
            return false;
        }
    }

    int left = 0, right = n - 1, currentChar = n - 1;
    while (left <= right) {
        if (s[left] - 'a' == currentChar) {
            ++left;
        } else if (s[right] - 'a' == currentChar) {
            --right;
        } else {
            return false;
        }
        --currentChar;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        if (isAlphabetical(s)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
