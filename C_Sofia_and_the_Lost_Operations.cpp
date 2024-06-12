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
    int n;
    cin >> n;
    vi a(n), b(n);
    forall(i,n,1) cin >> a[i];
    forall(i,n,1) cin >> b[i];
    int m;
    cin >> m;
    vi c(m);
    forall(i,m,1) cin >> c[i];
    map<int,int> mp;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i]) mp[b[i]]++;
    }
    for(auto i : c)
    {
        if(mp[i]) mp[i]--;
    }
    bool flag = 1;
    for(auto i : b)
    {
        if(i == c[m-1]) flag = 0;
    }
    if(flag)
    {
        cout << "NO\n";
        return;
    }
    for(auto i : mp)
    {
        if(i.second)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES" << endl;
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