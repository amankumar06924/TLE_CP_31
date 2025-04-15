#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> a(n + 1, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == '<') {
                a[i + 1] = a[i] + 1;
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '>') {
                a[i] = max(a[i], a[i + 1] + 1);
            }
        }

        set<int> distinct(a.begin(), a.end());
        cout << distinct.size() << endl;
    }
    return 0;
}