#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = abs(arr[i]);
    }

    sort(arr, arr + n);
    auto it = find(arr, arr + n, 0);
    if (n == 1)
    {
        cout << arr[0] << endl;
    }
    else if (it != arr + n)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << arr[0] << endl;
    }
    return 0;
}