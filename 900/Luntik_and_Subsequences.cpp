#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int n;
    cin >> n;
    vector<long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    long long ct0 = count(v.begin(), v.end(), 0);
    long long ct1 = count(v.begin(), v.end(), 1);

    if (ct1 > 0)
    {
        cout << (1LL << ct0) * ct1 << endl;
    }
    else
    {
        cout << 0 << endl;
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