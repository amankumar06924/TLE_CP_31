#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if (k == 4)
    {
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                cnt++;
            }
            if (v[i] % 4 == 0)
            {
                cout << 0<<endl;
                return;
            }
        }
        if (cnt >= 2)
        {
            cout << 0<<endl;
            return;
        }
        if (cnt == 1)
        {
            cout << 1<<endl;
            return;
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 4 == 3)
            {
                cout << 1<<endl;
                return;
            }
        }
        cout << 2<<endl;
        return;
    }
    bool mul = false;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % k == 0)
        {
            cout << 0<<endl;
            return;
        }
        int dum = k - (v[i] % k);
        if (ans > dum)
        {
            ans = dum;
        }
    }
    cout << ans<<endl;
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