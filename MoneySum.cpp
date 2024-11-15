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
    int n;
    cin >> n;
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    int sum = accumulate(all(a), 0);
    vector<bool> dp(sum + 1, false);
    dp[0] = true;
    for(int i = 0; i < n; i++)
    {
        for(int j = sum; j >= a[i]; j--)
        {
            dp[j] = dp[j] || dp[j - a[i]];
        }
    }
    vi ans;
    for(int i = 1; i <= sum; i++)
    {
        if(dp[i]) ans.pb(i);
    }
    cout << ans.size() << endl;
    for(auto x: ans) cout << x << " ";
    cout << endl;

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