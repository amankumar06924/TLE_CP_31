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
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        vector<int>v;
        for(auto &i:m){
            v.push_back(i.second);
        }
        int c1 = count(v.begin(),v.end(),1);
        // int c2 = count(v.begin(),v.end(),2);
        // int cn = count(v.begin(),v.end(),arr[0]);
        if (n==2)
        {
            cout<<"YES"<<endl;
        }
        else if(n==3 && c1!=3){
            cout<<"YES"<<endl;
        }else if(n>3 && (c1==0 )){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        } 
    }
return 0;
}