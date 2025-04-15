#include <bits/stdc++.h>
using namespace std;

bool check_cons(string s)
{
    int sl = s.size();
    for (int i = 2; i < sl; i++)
    {
        if (s[i] == '.' && s[i - 1] == '.' && s[i - 2] == '.')
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ct = count(s.begin(), s.end(), '.');
        if (check_cons(s))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << ct << endl;
        }
    }

    return 0;
}