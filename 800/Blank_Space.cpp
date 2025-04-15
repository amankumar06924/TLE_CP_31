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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                k++;
            }
            if (arr[i] == 0)
            {
                v.push_back(k);
            }
        }
        map<int, int> m;
        for (int i = 0; i < v.size(); i++)
        {
            m[v[i]]++;
        }
        vector<int> vp;
        for (auto &i : m)
        {
            vp.push_back(i.second);
        }
        int max = 0;
        if (!vp.empty())
        {
            max = *max_element(vp.begin(), vp.end());
        }
        cout << max << endl;
    }

    return 0;
}
