#include<iostream>
#include<set>
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


vi g[100005];
vi b;
vi a[100005];
set<int> s;

void dfs(int n, int p)
{
    if(b[n] == 0) s.insert(p);
    for(auto i : g[n])
    {
        if(i != p) dfs(i, n);
    }
}

void solve()
{
    int n;
    cin >> n;
    b.resize(n + 1);

    int r = 0;
    for(int i = 1; i <= n; i++)
    {
       int x, y;
       cin >> x >> y;
       b[i] = y;
       if(x != -1)
       {
            g[i].pb(x);
            g[x].pb(i);
       }
       else r = i;
    }
    dfs(r, -1);
    bool flag = 0;
    for(int i = 1; i <= n; i++)
    {
        if(s.find(i) == s.end() && b[i] == 1)
        {
            cout << i << " ";
            flag = 1;
        }
    }
    if(!flag) cout << -1;
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