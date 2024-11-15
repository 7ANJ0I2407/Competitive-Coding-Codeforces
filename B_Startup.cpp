#include<iostream>
#include <bits/stdc++.h>
#include<map>
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

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    forall(i, k, 1)
    {
        int x, y;
        cin >> x >> y;
        mp[x] += y;
    }
    priority_queue<int> pq;
    for(auto x: mp)
    {
        pq.push(x.second);
    }
    int ans = 0;
    while(!pq.empty() && n--)
    {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
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