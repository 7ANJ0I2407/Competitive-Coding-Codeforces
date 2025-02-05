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
    int n, m;
    cin >> n >> m;
    vi a(n+1, INT_MIN);
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(all(a));
    vi prefix(n+1, 0);
    for(int i = 1; i <= n; i++) prefix[i] = prefix[i-1] + a[i];
    // got the prefix array
    // 9 2
    // 6 19 3 4 4 2 6 7 8
    // 2 3 4 4 6 6 7 8 19 after sorting
    // 2 5 9 13 19 25 32 40 59 prefix array
    // 2 5 9 + 2 = 11 13 + 5 = 18 
    vi ans(n+1, 0);
    for(int i = 1; i <= n; i++)
    {
        ans[i] = prefix[i];
        if(i-m >= 0) ans[i] += ans[i-m];
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";
    cout << endl;
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