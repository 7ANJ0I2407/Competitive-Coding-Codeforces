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


int n, m;
int dp[11][1001][1001];
const int mod = 1e9 + 7;

int f(int idx, int a, int b)
{
    if(idx == m)
    {
        return 1;
    }
    if(a > b ||  b < 1 || a > n) return 0;
    if(dp[idx][a][b] != -1) return dp[idx][a][b];
    return dp[idx][a][b] = (f(idx + 1, a, b) % mod + f(idx, a + 1, b) % mod + f(idx, a, b - 1) % mod - f(idx, a + 1, b - 1) % mod + mod) % mod;
}

void solve()
{
    
    cin >> n >> m;
    memset(dp, -1, sizeof(dp));
    cout << f(0, 1, n) << endl;
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