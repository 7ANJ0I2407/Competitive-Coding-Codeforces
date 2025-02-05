#include<iostream>
#include <bits/stdc++.h>
#include <map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i = 0; i < n; i += x)
#define forall1(m,n,x) for(int i = m; i < n; i += x)
#define forall2(i,n,x) for(int i = m; i <= n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n+1, n);
    forall1(1, m + 1, 1)
    {
        int x, y;
        cin >> x >> y;
        if(x > y) swap(x, y); // x chota y bada
        a[x] = min(a[x], y - 1);
    }
    int ans = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        a[i] = min(a[i], a[i+1]);
    }
    for(int i = 1; i <= n; i++)
    {
        ans += (a[i] - i + 1);
    }
    cout << ans << endl;

    
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
    solve();
}

return 0;
}