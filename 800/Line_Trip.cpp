#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n, x;
        cin>>n>>x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int a = ((x - arr[n-1]) * 2);
        vector<int> v;
        if (n==1)
        {
           if (a>=arr[0])
           {
            cout<<a<<endl;
           }else{
            cout<<arr[0]<<endl;
           }
        }else{
            for (int i = 1; i < n; i++) {
                v.push_back(arr[i] - arr[i-1]);
            }
            v.push_back(arr[0]);
            int max_diff = *max_element(v.begin(), v.end());
            
            if (a >= max_diff) {
                cout << a << endl;
            } else {
                cout << max_diff << endl;
            }

        }
        
    }
    return 0;
}
