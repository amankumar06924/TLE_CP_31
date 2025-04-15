#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int size = s.size();
        for (int i = 0; i < n; i++)
        {
            if((s[i]=='1' && s[n-1-i]=='0')|| s[i]=='0' && s[n-1-i]=='1'){
                size -=2;
            }else{
                break;
            }
        }
        if(size<=0){
            cout<<0<<endl;
        }else{
            cout<<size<<endl;
        }
        
    }
    
return 0;
}