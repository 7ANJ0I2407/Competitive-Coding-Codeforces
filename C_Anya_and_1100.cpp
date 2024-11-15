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

int cnt = 0;
string s;
int n;

int c(int i) {
    if (i < 1 || i + 3 > n) return 0;

    string pat = "1100";
    for (int j = 0; j <= 3; j++) {
        if (s[i + j] != pat[j]) return 0;
    }
    return 1;
}

void solve() {
    cin >> s;
    s = "." + s;
    n = s.size() - 1;
    cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += c(i);
    }
    int q;
    cin >> q;
    while (q--) {
        int idx;
        char ch;
        cin >> idx >> ch;
        for (int j = idx - 3; j < idx; j++) {
            if (j > 1 && j + 3 < n) cnt -= c(j);
        }
        s[idx] = ch;
        for (int j = idx - 3; j < idx; j++) {
            if (j >= 1 && j + 3 < n) cnt += c(j);
        }
        cout << (cnt > 0 ? "YES" : "NO") << endl;
    }
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
