#include<iostream>
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
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n;
    cin >> n;
    if (n <= 0) return; // Check for non-positive input early
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    vector<vector<int>> v;
    forall(i, n, 1)
    {
        int l = 0, r = v.size() - 1, ans = v.size();
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid].back() < a[i])
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (ans == v.size())
        {
            v.pb({a[i]});
        }
        else
        {
            v[ans].pb(a[i]);
        }
    }
    for (auto &x : v)
    {
        for (auto y : x) cout << y << ' ';
        cout << endl;
    }
}


signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
while(t--)
{
solve();
}

return 0;
}