#include <bits/stdc++.h>
using namespace std;

void amn(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++){
        if (v[i] == 1)
        {
            v[i] = 2;
        }
    }
    for (int i = 1; i < n; i++){
        if (v[i] % v[i - 1] == 0)
        {
            v[i]++;
        }
    }
    for (int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
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