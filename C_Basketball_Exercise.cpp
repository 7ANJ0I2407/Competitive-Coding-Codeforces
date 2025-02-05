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
    vi h1(n), h2(n);
    for(auto &i : h1) cin >> i;
    for(auto &i : h2) cin >> i;
    vector<vector<int> > dp(n, vector<int> (2, 0)); // dp[i][j] = max height such that chosen ith player from jth row(0, 1);
    // dp[0][0] = h1[0];
    // dp[0][1] = h2[0];
    // for(int i = 1; i < n; i++)
    // {
    //     if(i == 1)
    //     {
    //         dp[i][0] = h1[i] + dp[i - 1][1];
    //         dp[i][1] = h2[i] + dp[i - 1][0];
    //     }
    //     else {
    //         dp[i][0] = h1[i] + max(dp[i - 1][1], dp[i - 2][1]);
    //         dp[i][1] = h2[i] + max(dp[i - 1][0], dp[i - 2][0]);
    //     }
    // }
    // cout << max(dp[n - 1][0], dp[n - 1][1]) << endl;

    vi dp1(n), dp2(n);
    dp1[0] = h1[0];
    dp2[0] = h2[0];
    for(int i = 1; i < n; i++)
    {
        if(i == 1)
        {
            dp1[i] = h1[i] + dp2[i - 1];
            dp2[i] = h2[i] + dp1[i - 1];
        }
        else {
            dp1[i] = h1[i] + max(dp2[i - 1], dp2[i - 2]);
            dp2[i] = h2[i] + max(dp1[i - 1], dp1[i - 2]);
        }
    }
    cout << max(dp1[n - 1], dp2[n - 1]) << endl;

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