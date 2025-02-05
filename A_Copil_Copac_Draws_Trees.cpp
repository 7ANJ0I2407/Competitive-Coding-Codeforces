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

vector<vector<pair<int, int> > > a;
vector<int> dp;

void dfs(int node, int par, int idx)
{
    for(auto adjNode : a[node])
    {
        if(adjNode.first == par) continue;
        dp[adjNode.first] = dp[node] + (adjNode.second < idx);
        dfs(adjNode.first, node, adjNode.second);
    }
}

void solve()
{
    int n;
    cin >> n;
    a.resize(n + 1);
    dp.resize(n + 1, 0);
    for(int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb({y, i});
        a[y].pb({x, i});
    }
    dp[1] = 1;
    dfs(1, 0, 1);
    cout << *max_element(all(dp)) << endl;
    a.clear();
    dp.clear();
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