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
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    forall(i, n, 1) cin >> a[i];
    
    for(int i = 1; i < n / 2; i++) if(a[i] == a[i-1] || a[n - i - 1] == a[n - i]) swap(a[i], a[n - i - 1]);
    forall(i, n - 1, 1) if(a[i] == a[i + 1]) ans++;
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
