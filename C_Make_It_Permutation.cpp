#include <iostream>
#include <vector>
#include <set>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define int long long
typedef vector<ll> vi;
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    set<int> st;
    int present = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (st.find(x) == st.end()) {
            st.insert(x);
        } else {
            present++;
        }
    }
    
    int rem = present * c;
    int ans = LLONG_MAX;
    vi a(st.begin(), st.end());
    int size = st.size();

    for (int i = 0; i < size; i++) {
        int add = a[i] - (i + 1); // Missing elements till position i
        int sub = (size - (i + 1)); // Remaining elements
        int tot = max(0LL, add) * d + max(0ll,sub) * c;
        ans = min(ans, tot);
    }

    ans = min(ans, 1LL * d * size + c); // c
    cout << ans + rem << endl; // c
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0); 
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
