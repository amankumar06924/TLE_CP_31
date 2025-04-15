#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int n;
    cin >> n;
    vector<int> v(n);
    set<int> r;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int sp = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            r.insert(sp);
        }
        else
        {
            sp++;
        }
    }
    if (r.size()>2)
    {
        cout<<2<<endl;
    }else{
        cout <<r.size() << endl;
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
