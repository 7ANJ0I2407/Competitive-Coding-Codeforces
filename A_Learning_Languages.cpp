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

vi language[101];
int par[101];


// find parent and path compression
int find(int x)
{
    if(par[x] == x) return x;
    return par[x] = find(par[x]);
}

// join two sets
void unite(int x, int y)
{
    x = find(x);
    y = find(y);
    if(x != y) par[y] = x;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    bool check = 0;
    for(int i = 1; i <= n; i++) par[i] = i;
    for(int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;

        if(m > 0) check = 1; 
        for(int j = 0; j < m; j++) // goes through all the languages
        {
            int x;
            cin >> x;
            language[x].pb(i); // stores the index of the person who knows the language
        }
    }
    if(!check)
    {
        cout << n << endl;
        return;
    }
    for(int l = 1; l <= k; l++)
    {
        for(int person = 0; person < language[l].size(); person++)
        {
            unite(language[l][0], language[l][person]);
        }
    }
    // now find how many groups are there
    int groups = 0;
    for(int i = 1; i <= n; i++)
    {
        if(par[i] == i) groups++;
    }
    cout << groups-1 << endl;
    
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