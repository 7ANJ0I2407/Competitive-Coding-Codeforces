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

int par[101];

int find(int x)
{
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

void unite(int x, int y)
{
    int a = find(x);
    int b = find(y);
    if(a != b) par[a] = b;
}


void solve()
{
    int n;
    cin >> n;
    vector<pair> adj(n);
    for(int i = 0; i < n; i++)
    {
        cin >> adj[i].first >> adj[i].second;
    }
    for(int i = 0; i < 101; i++) 
    {
        par[i] = i;
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(adj[i].first == adj[j].first || adj[i].second == adj[j].second)
            {
                unite(i, j);
            }
        }
    }
    int components = 0;

    for(int i = 0; i < n; i++)
    {
        if(par[i] == i) components++;
    }
    cout << components-1 << endl;
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