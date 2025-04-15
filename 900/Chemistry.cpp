#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        vector<int> v;
        for (auto &i : m)
        {
            if (i.second % 2 == 1 && k > 0)
            {
                i.second = i.second - 1;
                k = k - 1;
            }
            v.push_back(i.second);
        }
        int cto = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] % 2 == 1)
            {
                cto++;
            }
        }
        if ((n % 2 == 0 && cto > 0) || (n % 2 == 1 && cto > 1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}