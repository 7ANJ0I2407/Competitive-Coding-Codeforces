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
    int n, x;
    cin >> n >> x;
    vector<int> price(n), pages(n);
    
    for (int i = 0; i < n; i++) cin >> price[i];
    for (int i = 0; i < n; i++) cin >> pages[i];
    vector<vector<int> > dp(n+1, vector<int> (x+1, 0));
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j <= x; j++)
        {
            dp[i][j] = dp[i-1][j];
            if(j >= price[i-1]) dp[i][j] = max(dp[i][j], dp[i-1][j - price[i-1]] + pages[i-1]);
        }
    }
    cout << dp[n][x] << endl;
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