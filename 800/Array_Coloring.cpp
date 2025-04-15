#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int sum = accumulate(v.begin(),v.end(),0);
        if (sum%2==0)
        {
            int first = sum/2;
            // int sec = sum/2;
            if (first%2==1 || first%2==0)
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            
        }else{
            int firo = (sum/2) + 1;
            int sec0e = (sum/2);
            if ((firo%2==0 && sec0e%2==0) || (firo%2==1 && sec0e%2==1))
            {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
             
        }
        
    }
    
return 0;
}