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
// #define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

const int mod = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    // we define dp[i][j] as the number of sequences of length i that end with j
    vector<vector<int> > dp(k + 1, vector<int>(n + 1, 0));
    // for 1 length sequence, there is only 1 sequence that ends with j
    for(int i = 1; i <= n; i++) dp[1][i] = 1;
    // for i length sequence, we calculate the number of sequences that end with j
    // divisors of j are the possible values that can be added to the sequence
    // now fill the dp table
    for(int len = 2; len <= k; len++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int div = 1; div * div <= j; div++)
            {
                if(j % div == 0)
                {
                    dp[len][j] = (dp[len][j] + dp[len - 1][div]) % mod;
                    if(div != j / div) dp[len][j] = (dp[len][j] + dp[len - 1][j / div]) % mod;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans = (ans + dp[k][i]) % mod;
    }
    cout << ans << endl;
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