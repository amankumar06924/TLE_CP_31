#include <bits/stdc++.h>
using namespace std;

void amn()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    vector<int> fre;
    for (auto &i : mp)
    {
        fre.push_back(i.second);
    }

    int max_fre = *max_element(fre.begin(), fre.end());
    if(max_fre==n){
        cout<<"0"<<endl;
    }
    else{
    int min_opr=0;
    while(2*max_fre<n){
        min_opr=min_opr+max_fre+1;
        max_fre=2*max_fre;
    }
    cout<<min_opr+(n-max_fre)+1<<endl;
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
