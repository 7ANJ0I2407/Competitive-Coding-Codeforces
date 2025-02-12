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

bool comp(pair a, pair b)
{
    return a.second + a.first < b.second + b.first;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair> a;
    forall(i, n, 1)
    {
        int x, y;
        cin >> x >> y;
        a.pb(make_pair(x, y));
    }
    sort(all(a), comp);
    forall(i, n, 1)
    {
        cout << a[i].first << " " << a[i].second  << ' ';
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