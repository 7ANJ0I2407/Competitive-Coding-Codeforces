#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i = 0; i < n; i += x)
#define forall1(m,n,x) for(int i = m; i < n; i += x)
#define forall2(i,n,x) for(int i = m; i <= n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")


void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    auto getRes = [&] (int i)->int {
        return max(0ll, (max(a[i+1], a[i-1]) - a[i] + 1));
    };
    int ans = 0;
    // if n is odd the answer will be the sum of all the odd indexed elements
    if(n & 1)
    {
        for(int i = 2; i <= n - 1; i += 2)
        {
            ans += getRes(i);
        }
        cout << ans << endl;
        return;
    }
    // challange is for even index
    // we first do the same as for odd index then we do the same for even index
    int res = 0;
    for(int i = 2; i <= n - 1; i += 2)
    {
        res += getRes(i);
    }
    ans = res;
    for(int i = n - 1; i > 1; i -= 2)
    {
        res -= getRes(i - 1);
        res += getRes(i);
        ans = min(ans, res);
        // cout << i << " " << res << endl;
    }
    cout << endl;
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