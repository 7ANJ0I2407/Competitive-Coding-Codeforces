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

void solve()
{
    int n;
    cin >> n;
    vector<vector<int> > adj(n, vector<int>(n, INT_MAX));
    forall(i, n, 1)
    {
        forall(j, n, 1)
        {
            cin >> adj[i][j];
            if(i == j) adj[i][j] = 0;
        }
        
    }
    vi a(n);
    forall(i, n, 1)
    {
        cin >> a[i];
        a[i]--;
    }
    // deleting the edges is same as adding them back in reverse order
    vi ans;
    reverse(all(a));
    // need to track which edge are added or which are left
    vector<bool> vis(n);
    for(int k = 0; k < n; k++)
    {
        int currNode = a[k]; // take the node
        vis[currNode] = true; // added this node to the graph
        // now calculate the answer
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                adj[i][j] = min(adj[i][j], adj[i][currNode] + adj[currNode][j]);
            }
        }
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            if(!vis[i]) continue;
            for(int j = 0; j < n; j++)
            {
                if(!vis[j]) continue;
                sum += adj[i][j];
            }
        }
        ans.pb(sum);
    }
    reverse(all(ans));
    for(auto x: ans)
    {
        cout << x << " ";
    }
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