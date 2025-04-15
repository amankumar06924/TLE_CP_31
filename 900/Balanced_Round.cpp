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
        vector<int> v;
        vector<int> f;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int ct = 1;
        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] > k)
            {
                f.push_back(ct);
                ct = 1;
            }
            else
            {
                ct++;
            }
        }
        f.push_back(ct);
        int max_group = *max_element(f.begin(), f.end());
        cout << n - max_group << endl;
    }

    return 0;
}
