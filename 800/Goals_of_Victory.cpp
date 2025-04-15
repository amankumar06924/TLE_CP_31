#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n-1];
        for (int i = 0; i < n-1; i++)
        {
            cin>>arr[i];
        }
        int sum = accumulate(arr,arr+n-1,0);
        if (sum>0)
        {
            cout<<-sum<<endl;
        }else{
            cout<<-sum<<endl;
        }
        
        
    }
    
return 0;
}