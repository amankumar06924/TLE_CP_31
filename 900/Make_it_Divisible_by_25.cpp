#include <bits/stdc++.h>
using namespace std;

void amn() {
    string s;
    cin >> s;
    int n = s.size();
    
    if ((s[n - 2] == '2' && s[n - 1] == '5') ||
        (s[n - 2] == '5' && s[n - 1] == '0') ||
        (s[n - 2] == '7' && s[n - 1] == '5') ||
        (s[n - 2] == '0' && s[n - 1] == '0')) {
        cout << 0 << endl;
        return;
    }

    int ct = INT_MAX;
    char target[] = {'0', '5', '2', '7'};
    
    for (char c : target) {
        int pos1 = -1, pos2 = -1;

        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                pos1 = i;
                break;
            }
        }

        for (int i = pos1 - 1; i >= 0; --i) {
            if ((c == '0' && (s[i] == '0' || s[i] == '5')) ||
                (c == '5' && (s[i] == '2' || s[i] == '7'))) {
                pos2 = i;
                break;
            }
        }

        if (pos2 != -1) {
            ct = min(ct, n - pos2 - 2);
        }
    }

    cout << (ct == INT_MAX ? -1 : ct) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        amn();
    }

    return 0;
}