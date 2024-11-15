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

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int> > dp(n+1, vector<int>(m+1, INT_MAX));
    dp[0][0] = 0;
    for(int i = 1; i <= n; i++) // try all lengths
    {
        for(int j = 1; j <= m; j++) // try all breadths
        {
            if(i == j) dp[i][j] = 0;
            for(int k = 1; k < i; k++) 
            dp[i][j] = min(dp[i][j], dp[k][j] + dp[i-k][j] + 1);
            for(int k = 1; k < j; k++) 
            dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[i][j-k]);
        }
    }
    cout << dp[n][m] << endl;
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