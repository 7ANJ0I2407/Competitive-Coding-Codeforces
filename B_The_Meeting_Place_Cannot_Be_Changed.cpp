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
#include<iomanip>

void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];

    ld ans = 1e9;
    auto search = [&](ld mid)-> bool {
        vector<pair<ld, ld>> v;
        for(int i = 0; i < n; i++)
        {
            ld l = a[i] - b[i] * mid;
            ld r = a[i] + b[i] * mid;
            v.pb({l, r});
        }
        ld l = -1e10, r = 1e10;
        for(int i = 0; i < n; i++)
        {
            if(l > v[i].second || r < v[i].first) return 0;
            l = max(l, v[i].first);
            r = min(r, v[i].second);
        }
        return 1;
    };

    ld l = 0, r = 1e9;
    for(int i = 0; i < 100; i++)
    {
        ld mid = (l + r) / 2;
        if(search(mid)) 
        {
            ans = mid;
            r = mid;
        }
        else l = mid;
    }
        cout << fixed << setprecision(12) << ans << endl;

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