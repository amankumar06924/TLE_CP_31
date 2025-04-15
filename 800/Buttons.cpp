#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int anna = 0;
        int katie = 0;
        if (c % 2 == 0)
        {
            anna = a + c / 2;
            katie = b + c / 2;
        }
        else
        {
            anna = a + (c + 1) / 2;
            katie = b + c / 2;
        }
        if (anna > katie)
        {
            cout << "First" << endl;
        }
        else if (katie > anna)
        {
            cout << "Second" << endl;
        }
        else if (anna == katie)
        {
            cout << "Second" << endl;
        }
        else
        {
            cout << "First" << endl;
        }
    }

    return 0;
}
