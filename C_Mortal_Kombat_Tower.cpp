#include<iostream>
#include <bits/stdc++.h>
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
    int n;
    cin >> n;
    vi a(n + 1);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int cnt = 0;
    int idx = 0;
    bool f = 1;
    if(n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    vector<vector<int> > dp(n, vector<int>(2, 0));
    // till the ith index.. 0-> first player, 1-> second player
    dp[0][0] = a[0];
    dp[0][1] = 1e9;
    dp[1][0] = a[0] + a[1];
    dp[1][1] = a[0];
    for(int i = 2; i < n; i++)
    {
        dp[i][0] = min(dp[i - 1][1] + a[i], dp[i - 2][1] + a[i-1] + a[i]);
        dp[i][1] = min(dp[i-1][0], dp[i-2][0]);
    }
    cout << min(dp[n-1][0], dp[n-1][1]) << endl;
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