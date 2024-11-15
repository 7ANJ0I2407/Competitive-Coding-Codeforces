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
    int n, d;
    cin >> n >> d;
    vi a(n + 1);
    forall(i, n, 1)
    {
        int x;
        cin >> x;
        if(x <= n) a[x]++; // freq array
    }
    int x = 0;
    while(a[x] != 0)
    {
        int m = -1;
        if(a[x] > 1) m = a[x] - 1;
        a[x] -= m;
        if(x + d <= n && m != -1) a[x + d] += m;
        x++;
        // cout << x << endl;
    }
    cout << x << endl;
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