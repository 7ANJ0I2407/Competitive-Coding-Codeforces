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
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0, idx = -1;
    map<int, int> dp; // max length of subsequence ending at i, element will be a[i]
    // so we can get the elements of the subsequence by going to dp[i] - 1, dp[i] - 2, ... dp[i] - dp[len] + 1
    for(int i = 0; i < n; i++)
    {
        int x = a[i];
        dp[x] = dp[x - 1] + 1;
        if(dp[x] > ans)
        {
            ans = dp[x];
            idx = x;
        }
        // cout << "THe num is " << x << " and the dp is ";
        // cout << dp[x] << ' ' << endl;
    }
    cout << ans << endl;
    vi res;
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] == idx)
        {
            cout << idx << ' ';
            res.pb(i);
            idx--;
        }
    }
    cout << endl;
    reverse(all(res));
    for(auto _ : res) cout << _ + 1 << ' ';
    cout << endl;
    // for(int i = ans; i >= 0; i--)
    // {
    //     cout << idx - i << ' ';
    // }
    // cout << endl;

}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
while(t--)
{
solve();
}

return 0;
}