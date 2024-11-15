#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

const int mod = 1000000007;

void solve()
{
    int n, k;
    cin >> n >> k;
    // vi a(n+1, 0);
    int maxi = 100000;
    vi dp(maxi, 0);
    vi pref(maxi, 0);
    dp[0] = 1;
    for(int i = 1; i <= maxi; i++)
    {
        dp[i] = dp[i-1];
        if(i >= k) dp[i] = (dp[i] + dp[i-k]) % mod;
    }
    for(int i = 1; i <= maxi; i++)
    {
        pref[i] = (pref[i-1] + dp[i]) % mod;
    }
    // forall(i, 50, 1) cout << pref[i] << ' ';
    // cout << endl;
    for(int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << (pref[r] - pref[l-1] + mod) % mod << endl;
    }
    
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