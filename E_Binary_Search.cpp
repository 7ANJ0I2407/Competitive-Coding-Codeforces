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
    vi a(n + 3,0);
    forall(i,n,1) cin >> a[i];
    int idx = -1;
    forall(i,n,1)
    {
        if(a[i] == k) idx = i + 1;
    }
    int l = 0, h = n;
    while(h - l > 1)
    {
        int mid = (h + l) / 2;
        if(a[mid] <= k) l = mid;
        else h = mid;
        // cout << a[mid] << endl;
        // cout << mid << ' ' << l << ' ' << h << ' ' << endl;
    }
    // cout << endl;
    // cout << l << endl;
    cout << 1 << endl;
    cout << idx << ' ' << l + 1 << endl;
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