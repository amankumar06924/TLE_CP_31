#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    for (int i = 1; i < n; i++)
    {
       v.push_back(arr[i] - arr[i-1] );
    }
    sort(v.begin(),v.end());
    if (is_sorted(arr,arr + n))
    {
        cout<<(v[0]/2) + 1 <<endl;
    }else{
        cout<<0<<endl;
    }
    }
    
return 0;
}