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
        int size = n * k;
        vector<int> v(size);
        for (int i = 0; i < size; ++i)
        {
            cin >> v[i];
        }
        long long  sum= 0;
        int id = size - 1;
        int med = n / 2;
        while (k--)
        {
            sum +=v[id - med];
            id = id - med - 1;
        }
        cout << sum << endl;
    }
    return 0;
}