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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vi ans(n);
    for(int i = n-1; i >= 0; i--)
    {
        s.insert(a[i]);
        ans[i] = s.size();
    }
    for(int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        cout << ans[x-1] << endl;
    }
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