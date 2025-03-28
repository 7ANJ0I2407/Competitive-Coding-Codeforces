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

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), q(k);
    string ans;
    for (auto &_ : a)
    cin >> _;
    for (auto &_ : q)
    cin >> _;
    if (k == n)
    {
        for (int i = 0; i < m; i++)
        cout << '1';
        cout << endl;
    }
    else if (k == n - 1)
    {
        int d = 1;
        for (auto m : q) if (m == d) d++; else break;
        if (d > n) d = n;
        ans.reserve(m);
        for (auto m : a) ans += (m == d) ? '1' : '0';
        cout << ans << endl;
    }
    else
    {
        for (int i = 0; i < m; i++)
        cout << '0';
        cout << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
