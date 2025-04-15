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

        vector<int> result;
        result.push_back(v[0]);

        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
            {
                result.push_back(v[i]);
            }
            result.push_back(v[i]);
        }

        cout << result.size() << endl;
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
    }

    return 0;
}