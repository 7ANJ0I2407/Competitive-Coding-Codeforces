#include<iostream>
#include <bits/stdc++.h>
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
#pragma GCC optimize("O3")

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    int ans = 0, best = INT_MIN;
    for(int i = 0; i < n; i++)
    {
        ans = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] >= a[j]) ans++; // Stalin sort
        }
        // cout << ans << ' ';
        best = max(best, ans);
    }
    // cout << endl;
    cout << n - best - 1 << endl;

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