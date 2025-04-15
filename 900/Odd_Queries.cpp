// #include <bits/stdc++.h>
// using namespace std;

// int chek(const vector<int> &v, int l, int r, int k, vector<int> &p)
// {
//     vector<int> temp = v;
//     for (int i = l - 1; i <= r - 1; i++)
//     {
//         temp[i] = k;
//     }
//     int sum = accumulate(temp.begin(), temp.end(), 0);
//     if (sum % 2 == 1)
//     {
//         p.push_back(1);
//     }
//     else
//     {
//         p.push_back(0);
//     }
//     return 0;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, q;
//         cin >> n >> q;
//         vector<int> v(n);
//         vector<int> p;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//         }
//         while (q--)
//         {
//             int l, r, k;
//             cin >> l >> r >> k;
//             chek(v, l, r, k, p);
//         }
//         for (int i = 0; i < q; i++)
//         {
//             if (p[i] == 1)
//             {
//                 cout << "YES" << endl;
//             }
//             else
//             {
//                 cout << "NO" << endl;
//             }
//         }
//     }

//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;

// int chek(const vector<int>& prefix, int total_sum, int l, int r, int k) {
//     int range_sum = prefix[r] - prefix[l - 1]; // Sum of elements in range [l, r]
//     int new_sum = total_sum - range_sum + (r - l + 1) * k; // Compute new sum
//     return new_sum & 1; // Check if new sum is odd
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n, q;
//         cin >> n >> q;
//         vector<int> v(n + 1, 0), prefix(n + 1, 0);

//         for (int i = 1; i <= n; i++) {
//             cin >> v[i];
//             prefix[i] = prefix[i - 1] + v[i]; // Construct prefix sum array
//         }

//         int total_sum = prefix[n]; // Total sum of the array

//         while (q--) {
//             int l, r, k;
//             cin >> l >> r >> k;
//             if (chek(prefix, total_sum, l, r, k)) {
//                 cout << "YES\n";
//             } else {
//                 cout << "NO\n";
//             }
//         }
//     }
//     return 0;
// }