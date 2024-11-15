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
    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int> > a(k, vector<int>(n));
    forall(i, n, 1)
    {
        forall(j, k, 1)
        {
            cin >> a[j][i];
            if(i > 0) a[j][i] |= a[j][i-1];
        }
    }
    while(q--)
    {
        int m;
        cin >> m;
        int l = 0, h = n;
        while(m--)
        {
            int x, y;
            char c;
            cin >> x >> c >> y;
            x--;
            if(c == '<') h = min(h, (int)(lower_bound(all(a[x]), y) - a[x].begin()));
            else l = max(l, (int)(upper_bound(all(a[x]), y) - a[x].begin()));
        }
        if(l >= h) cout << -1 << endl;
        else cout << l + 1 << endl;
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