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
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    vi a(n+1, 0);
    for(int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1]) a[i] = 1;
    }
    for(int i = 1; i < n; i++)
    {
        a[i] += a[i-1];
    }
    int m;
    cin >> m;
    while(m--)
    {
        int l, r;
        cin >> l >> r;
        cout << a[r-1] - a[l-1] << endl;
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