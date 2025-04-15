#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        reverse(v.begin(), v.end());
        if (v[0] == v[1])
        {ser
            swap(v[1], v[n - 1]);
        }
        long long sum = 0;
        bool r = true;
        for (int i = 0; i < n - 1; i++)
        {
            sum += v[i];
            if (sum == v[i + 1])
            {
                r = false;
                break;
            }
        }
        if (r)
        {
            cout << "YES" << endl;
            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}