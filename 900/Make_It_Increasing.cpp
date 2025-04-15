#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int ct = 0;
    bool check_ele = true;
    for (int i = 0; i < 60; i++)
    {
        check_ele = true;
        for (int j = 1; j < n; j++)
        {
            if (v[j - 1] >= v[j] && v[j - 1] != 0)
            {
                v[j - 1] = v[j - 1] / 2;
                ct++;
                check_ele = false;
            }
        }
        if (check_ele)
        {
            break;
        }
    }

    bool r = false;
    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] >= v[i])
        {
            r = true;
            break;
        }
    }
    if (r)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ct << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        amn();
    }

    return 0;
}