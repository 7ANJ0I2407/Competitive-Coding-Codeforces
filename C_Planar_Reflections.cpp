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

int dp[1001][1001][2];
const int MOD = 1e9 + 7;
int n;

int solve(int plane, int decay, bool dir)
{
    if(dp[plane][decay][dir] != -1) return dp[plane][decay][dir];
    if(decay == 1) return 1;
    int ans = 2;
    if(dir)
    {
        if(plane < n)
        {
            ans += solve(plane + 1, decay, dir) - 1;
            ans %= MOD;
        }
        if(plane > 1) 
        {
            ans += solve(plane - 1, decay -1, !dir) - 1;
            ans %= MOD;
        }
    }
    else
    {
        if(plane > 1)
        {
            ans += solve(plane - 1, decay, dir) - 1;
            ans %= MOD;
        }
        if(plane < n)
        {
            ans += solve(plane + 1, decay - 1, !dir) - 1;
            ans %= MOD;
        }
    }
    return dp[plane][decay][dir] = ans;
}

void solve()
{
    int k;
    cin >> n >> k;
    memset(dp, -1, sizeof(dp));
    // dp[1][0][0] = dp[1][0][1] = 1;
    cout << solve(1, k, 1) << endl;
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