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
    int n, q;
    cin >> n >> q;
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for(int i = 0; i < n; i++)
    {
        ll segment = (i + 1) * (n - i) - 1; // how many segments are there
        mp[segment]++;
        if(i > 0)
        {
            ll s = i * (n - i); // in between segments
            mp[s] += (a[i] - a[i - 1] - 1); // how many points are there in between
        }
    }
    while(q--)
    {
        int k;
        cin >> k;
        if(mp.find(k) == mp.end())
        {
            cout << 0 << ' ';
        }
        else
        {
            cout << mp[k] << ' ';
        }
    }
    cout << endl;

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