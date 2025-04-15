#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        int ct=1;
        while(n%ct==0){
            ct++;
        }
        cout << ct-1 << endl;
    }
    return 0;
}