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
int N = 1e6+5;
vector<int> r(N), c(N);
void solve()
{
    int n, m;
    cin >> n >> m;
    forall(i, n, 1)
    {
        forall(j, m, 1)
        {
            int a;
            cin >> a;
            r[a] = i;
            c[a] = j;
        }
    }
    map<pair, int> mp1, mp2;
    forall(i,n,1)
    {
        forall(j,m,1)
        {
            int a;
            cin >> a;
            if(r[a] != i) mp1[{r[a], i}]++;
            if(c[a] != j) mp2[{c[a], j}]++;
        }
    }
    bool ans = 1;
    for(auto [i, j] : mp1) ans &= (j == m);
    for(auto [i, j] : mp2) ans &= (j == n);

    if(ans) cout << "YES\n";
    else cout << "NO\n";
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