#include <iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")


void solve() {
    int l, r, i, k;
    cin >> l >> r >> i >> k;
    int pow = 1ll << i; // 2^i
    int start = 0, end  = -1;
    auto power = [&](int n) -> int { // power of 2
        if (n % 4 == 0) return n;
        if (n % 4 == 1) return 1;
        if (n % 4 == 2) return n + 1;
        return 0;
    };
    if (l > k) { 
        int a = 0;
        if(l > k) a = l - k;
        start = (a + pow - 1) / pow;
    } 
    if (r >= k) {
        end = (r - k) / pow;
    } 
    int ans = 0;
    if (start <= end) { // got the range..
        int temp = end - start + 1;
        int i_xor = power(end) ^ power(start - 1);
        ans = i_xor << i;
        if (temp & 1) ans ^= k;
    }
    int XOR_all = power(r) ^ power(l - 1);
    int res = XOR_all ^ ans;
    cout << res << "\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
