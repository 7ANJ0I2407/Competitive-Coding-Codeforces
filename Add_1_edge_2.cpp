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

int n;
vector<vector<int> > a;
vector<int> vis;
vector<int> deg;


int find(int node)
{
    queue<int> q;
    q.push(node);
    vis[node] = 1;
    int degcount = 0;
    while(!q.empty())
    {
        int n = q.front();
        q.pop();
        for(auto adjNode : a[n])
        {
            if(!vis[adjNode])
            {
                if(deg[adjNode] == 3)
                {
                    q.push(adjNode);
                    vis[adjNode] = 1;

                }
                else if(deg[adjNode] == 2)
                {
                    degcount++;
                }
            }
        }
    }
    return degcount;
}


void solve()
{
    cin >> n;
    a.assign(n + 1, vector<int>());
    vis.assign(n + 1, 0);
    deg.assign(n + 1, 0);
    for(int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x].pb(y);
        a[y].pb(x);
        deg[x]++;
        deg[y]++;
    }
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(deg[i] == 3 && !vis[i])
        {
            int deg2 = find(i);
            if(deg2 >= 2)
            {
                res += deg2 * (deg2 - 1) / 2;
            }
        }
    }
    cout << res << endl;

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