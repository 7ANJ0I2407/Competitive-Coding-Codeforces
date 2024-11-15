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
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    int sum = 0;
    forall(i, n, 1)
    {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % 3 != 0)
    {
        cout << 0 << endl;
        return;
    }
    
    int target = sum / 3;
    vi dp(n + 1, 0); // prefix sum array
    dp[0] = a[0];

    for(int i = 1; i < n; i++)
    {
        dp[i] = (dp[i - 1] + a[i]);
    }

    int len_seen = 0, ways = 0;
    for(int i = 0; i < n - 1; i++)
    {
        if(dp[i] == 2 * target) ways += len_seen;
        if(dp[i] == target) len_seen++;
    }
    cout << ways << endl;
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