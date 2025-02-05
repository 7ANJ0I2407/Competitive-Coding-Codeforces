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
    vi a(n);
    for(auto &i : a) cin >> i;
    vector<vector<int> > dp(n, vector<int> (3, 1e9));
    //dp[i][j] = min number of days I will rest if i have passed ith day and j as the last activity
    // 0 - rest, 1 - contest, 2 - gym
    dp[0][0] = 1; // I can rest on the first day
    if(a[0] == 1 || a[0] == 3) dp[0][1] = 0; // I can't take rest on the first day as it is a contest day
    if(a[0] == 2 || a[0] == 3) dp[0][2] = 0;
    for(int i = 1; i < n; i++)
    {
        dp[i][0] = 1 + min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        if(a[i] == 1 || a[i] == 3) dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        if(a[i] == 2 || a[i] == 3) dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
    }
    cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) << endl;


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