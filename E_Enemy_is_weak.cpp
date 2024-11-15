#include<iostream>
#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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

typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    forall(i, n, 1)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    ordered_set lset, rset;
    for(int i = 1; i < n; i++)
    {
        rset.insert(a[i]);
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int leftCount = lset.size() - lset.order_of_key(a[i] + 1);
        int rightCount = rset.order_of_key(a[i]);
        ans += leftCount * rightCount;
        lset.insert(a[i]);
        rset.erase(a[i + 1]);
    }
    cout << ans << endl;
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
