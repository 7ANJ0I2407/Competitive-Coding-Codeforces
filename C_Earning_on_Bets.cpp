#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
#include<algorithm>
#include<numeric>
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
int maxi = 23262560;
void solve()
{
    int n; cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    int temp = 0;
    forall(i,n,1) temp += maxi / a[i];
    if(temp >= maxi)
    {
        cout << -1 << endl;
        return;
    }
    for(int i = 0; i < n; i++)
    {
        cout << maxi / a[i] << ' ';
    }
    cout << endl;
    // cout << temp << endl;
    // int ans = 0;
    // forall(i,n,1) ans += temp/a[i];
    // // cout << temp << ' ' << ans << ' ';
    // if(temp > ans) forall(i, n, 1) cout << temp / a[i] << ' ';
    // else cout << -1 << ' ';
    // cout << endl;

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