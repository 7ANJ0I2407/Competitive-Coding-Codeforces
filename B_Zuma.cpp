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

ll dp[1000][1000];

int rec(vector<int> & a, int i, int j)
{
    if(i >= j) return 1;
    if(dp[i][j] != -1) return dp[i][j];
    ll ans = 1 + min(rec(a, i+1, j), rec(a, i, j-1));
    if(a[i] == a[j])
    {
        ans = min(ans, rec(a, i+1, j-1));
    }
    for(int k = i+1; k < j; k++)
    {
        if(a[i] == a[k])
        {
            ans = min(ans, rec(a, i+1, k-1) + rec(a, k+1, j));
        }
    }
    return dp[i][j] = ans;

}

void solve()
{
    int n; cin >> n;
    vi a(n, 0);
    forall(i, n, 1) cin >> a[i];
    memset(dp, -1, sizeof(dp));
    cout << rec(a, 0, n-1) << endl;
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