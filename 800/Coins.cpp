#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n, k; 
        cin >> n >> k;
        long long gc = __gcd(2LL, k);
        if (n % gc == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
