
#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    long long minSum = 0, maxSum = 0;
    long long currentSum = accumulate(v.begin(), v.end(), 0LL);
    minSum = (currentSum + x - 1) / x;
    for (int i = 0; i < n; i++)
    {
        maxSum += (v[i] + x - 1) / x;
    }

    cout << minSum << " " << maxSum << endl;
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
