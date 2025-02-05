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
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

vector<vector<int> > g;
vi ans;

void bfs(vector<int> & start, vector<int> & end, int n)
{
    vector<int> dist(n, 1e9);
    queue<int> q;
    for(auto _ : start)
    {
        q.push(_);
        dist[_] = 0;
    }
    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(auto adjNode : g[node])
        {
            if(dist[adjNode] == 1e9)
            {
                dist[adjNode] = dist[node] + 1;
                q.push(adjNode);
            }
        }
    }
    for(auto _ : end)
    {
        if(dist[_] != 1e9) ans[_] = dist[_];
    }

}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    g.resize(n);
    ans.resize(n, -1);
    forall(i, n, 1) cin >> a[i];
    vi odd, even;
    forall(i, n, 1)
    {
        if(a[i] & 1) odd.pb(i);
        else even.pb(i);
    }
    forall(i, n, 1)
    {
        int l = i - a[i]; // jumps to left
        int r = i + a[i]; // jumps to the right
        if(l >= 0) g[l].pb(i);
        if(r < n) g[r].pb(i);
    }
    bfs(even, odd, n);
    bfs(odd, even, n);
    for(auto _ : ans) cout << _ << ' ';
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