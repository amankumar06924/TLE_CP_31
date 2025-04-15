#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.length();
        int ct = 0;
        for (int i = 0; i < n - 1; ++i){
            if (s[i] != s[i + 1]){
                ct++;
                s.erase(i, 2);
                n = s.length();
                i = -1;
            }
        }
        if (ct % 2 == 0){
            cout << "NET" << endl;
        }
        else{
            cout << "DA" << endl;
        }
    }

    return 0;
}