#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
// #include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int, int>
typedef vector<ll> vi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()

void solve()
{
    int n, k, cycle = false;
    cin >> n >> k;
    set<int> adj[n + 1]; // for graph creation
    vector<int> vis(n + 1), dfsVis(n + 1);
    for (int i = 0; i < k; i++)
    {
        vector<int> a(n);
        for (auto &j : a)
            cin >> j;
        for (int j = 2; j < n; j++)
        {
            adj[a[j-1]].insert(a[j]); // add edge from a[j-1] to a[j]
        }
    }

    function<void(int)> dfs = [&] (int node) {
        vis[node] = 1;
        dfsVis[node] = 1;
        for (auto &i : adj[node])
        {
            if (dfsVis[i])
                cycle = true;
            else if (!vis[i])
                dfs(i);
        }
        dfsVis[node] = 0;
    };
    for(int i = 1; i <= n; i++) {
        if (!vis[i]) dfs(i);
    }
    if(cycle) cout << "NO" << endl;
    else cout << "YES"<< endl;
}

        signed main()
        {
            ios::sync_with_stdio(false);
            cout.tie(0);
            cin.tie(0);
            int t = 1;
            cin >> t;
            while (t--)
            {
                solve();
            }

            return 0;
        }