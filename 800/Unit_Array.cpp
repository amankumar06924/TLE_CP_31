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
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count_1 = count(arr.begin(), arr.end(), 1);
        int count_01 = count(arr.begin(), arr.end(), -1);

        if (count_1 >= count_01)
        {
            if (count_01 % 2 == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            if (n == 3)
            {
                cout << count_01 << endl;
            }
            else if (n % 2 == 0)
            {
                cout << count_01 - n / 2 << endl;
            }
            else
            {
                cout<<count_01 - 2<<endl;

            }
        }
    }
    return 0;
}