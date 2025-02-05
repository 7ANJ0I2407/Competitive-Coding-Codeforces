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
    int n, m, d;
    cin >> n >> m >> d;
    vi a;
    for(int i = 0; i < n * m; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    int b = a[0] % d;
    for(int i = 0; i < n * m; i++)
    {
        if(a[i] % d != b)
        {
            cout << -1 << endl;
            return;
        }
    }
    // now we can make the array equal to the actual value;
    // ? what is the value we will be reducing it to ?
    // ifc it will be the median of the array
    sort(all(a));
    int median = a[(n * m) / 2];
    int ans = 0;
    for(int i = 0; i < n * m; i++)
    {
        ans += abs(a[i] - median);
    }
    cout << ans / d << endl;
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