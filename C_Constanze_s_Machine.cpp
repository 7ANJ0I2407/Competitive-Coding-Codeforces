#include<iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace __gnu_pbds;
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

const int mod = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    for(auto _ : s)
    {
        if(_ == 'm' || _ == 'w')
        {
            cout << 0 << endl;
            return;
        }
    }
    vi dp(n+1, 0); // dp[i] = number of ways to decode string of length i
    dp[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        dp[i] = dp[i-1];
        if(i > 1 && (s[i-1] == 'u' && s[i-2] == 'u' || s[i-1] == 'n' && s[i-2] == 'n'))
        {
            dp[i] += dp[i-2];
            dp[i] %= mod;
        }
    }
    cout << dp[n] << endl;


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