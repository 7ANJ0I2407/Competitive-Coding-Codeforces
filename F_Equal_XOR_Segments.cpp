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
    int n, k;
    cin >> n >> k;
    vi a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    vi prefix(n+1, 0);
    map<int, vi> mp;
    prefix[1] = a[1];
    mp[prefix[1]].pb(1); 
    mp[0].pb(0);   
    for(int i = 2; i <= n; i++) prefix[i] = prefix[i-1] ^ a[i], mp[prefix[i]].pb(i);
    while(k--)
    {
        int l, r;
        cin >> l >> r;
        if(prefix[l-1] == prefix[r])
        {
            cout << "YES" << endl;
            // cout << l-1 <<  ' ' << r << endl;
            continue;
        }
        else {
            int upperIdx = *lower_bound(all(mp[prefix[r]]), l); // m
            int lowerIdx = *--lower_bound(all(mp[prefix[l-1]]), r); // s
            cout << upperIdx << ' ' << lowerIdx << endl;
            if(upperIdx < lowerIdx)
            {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
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