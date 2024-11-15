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

vi adj[100005];
bool used[100005];
int dist[100005];


void dfs(int v)
{
    used[v] = 1;
    for(int u : adj[v])
    {
        dist[u] = dist[v] + 1;
        if(!used[u]) dfs(u);
    }
}

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] != -1) adj[a[i]].pb(i);
    }
    for(int i = 1; i <= n; i++)
    {
        if(a[i] == -1) dist[i] = 1, dfs(i);
    }
    int ans = INT_MIN;
    for(int i = 1; i <= n; i++) ans = max(ans, dist[i]);
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