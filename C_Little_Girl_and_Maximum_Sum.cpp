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
    int n, q;
    cin >> n >> q;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    sort(all(a));
    vi queries(n, 0);
    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        queries[l]++;
        if(r + 1 < n) queries[r+1]--;
    }
    for(int i = 1; i < n; i++)
    {
        queries[i] += queries[i-1];
    }
    // for(auto _ : queries) cout << _ << " ";
    // cout << endl;
    sort(all(queries));
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += a[i] * queries[i];
    }
    cout << ans;

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