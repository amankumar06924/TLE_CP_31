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
        for (int i = 0; i <= n-3; i++)
        {
            if ((arr[i] < arr[i+1] && arr[i+1]>arr[i+2]))
            {
                v.push_back(i+1);
                v.push_back(i+2);
                v.push_back(i+3);
                break;
            }
        }
        if (v.size()>0)
        {
            cout << "YES" << endl;
            cout << v[0] << " " << v[1] << " " << v[2] << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}