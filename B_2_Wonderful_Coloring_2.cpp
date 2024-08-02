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
    map<int, vi> mp;
    forall(i, n, 1)
    {
        int x;
        cin >>x;
        if(mp[x].size() < k)
            mp[x].pb(i);
    }
    int cnt = 0;
    for(auto x: mp)
    {
        cnt += x.second.size();
    }
    cnt -= cnt % k;
    vi ans(n, 0);
    int color = 0;
    for(auto x : mp)
    {
        if(cnt == 0) break;
        for(auto y : x.second)
        {
            ans[y] = ++color;
            if(color == k) color = 0;
            if(--cnt == 0) break;
        }
    }
    forall(i, n, 1) cout << ans[i] << " ";
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