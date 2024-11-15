#include<iostream>
// #include<vector>
// #include<map>
// #include<unordered_map>
// #include<set>
// #include<unordered_set>
// #include <deque>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
// #define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")


// think why floyd warshall is not working
// it is of O(n^3) and n is 10^5
// so it will take 10^15 operations
// which is not feasible
// so we need to think of some other approach
// we can use dfs to find the shortest path
// we can use bfs to find the shortest path
// we can use dijkstra to find the shortest path

vector<pair<int, int> > adj[100005];

int dfs(int par, int v, int n)
{
    int maxDist = 0;
    for(auto [to, w] : adj[v])
    {
        if(to != par)
        {
            maxDist = max(maxDist, w + dfs(v, to, n));
        }

    }
    return maxDist;
}

void solve()
{
    int n;
    cin >> n;
    adj->resize(n + 1);
    int sum = 0;
    forall(i, n-1, 1)
    {
        int x, y, w;
        cin >> x >> y >> w;
        sum  += 2 * w;
        adj[x].pb({y, w});
        adj[y].pb({x, w});
    }

    // cout << dfs(-1, 1, n) << endl;
    cout << sum - dfs(-1, 1, n) << endl;

    // int ans = 0;
    // auto dfs = [](int v, int n) -> pair<int, int> {
    //     vi dist(n+1, -1);
    //     int farthest = v, maxDist = 0;
    //     dist[v] = 0;
    //     queue<int> q;
    //     q.push(v);
    //     while(!q.empty())
    //     {
    //         int u = q.front();
    //         q.pop();
    //         for(auto [to, w] : adj[u])
    //         {
    //             if(dist[to] == -1)
    //             {
    //                 dist[to] = dist[u] + w;
    //                 q.push(to);
    //                 if(maxDist < dist[to])
    //                 {
    //                     maxDist = dist[to];
    //                     farthest = to;
    //                 }
    //             }
    //         }
    //     }
    //     return {farthest, maxDist};
    // };

    // pair<int, int> p1 = dfs(1, n);
    // pair<int, int> p2 = dfs(p1.first, n);
    // cout << p2.second << endl;
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