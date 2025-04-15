#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int x=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            x = x^arr[i];
        }
        if(n%2==1){
            cout<<x<<endl;
        }else if(x==0 && n%2==0){
            cout<<arr[n-1]<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }
    return 0;

}