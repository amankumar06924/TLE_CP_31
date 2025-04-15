// #include <bits/stdc++.h>
// using namespace std;

// void amn()
// {
//     int a, b, c;
//     cin >> a >> b >> c;
//     int x = 2 * b - c;
//     int y = (a + c) / 2;
//     int z = 2 * b - a;
//     if ((b - a) == (c - b) || (b - x) == (c - b) || (y - a) == (c - y) || (b - a) == (z - b))
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         amn();
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((2 * b == a + c) ||
        ((2 * b - c) > 0 && (2 * b - c) % a == 0) ||
        ((a + c) % 2 == 0 && ((a + c) / 2) % b == 0) ||
        ((2 * b - a) > 0 && (2 * b - a) % c == 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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