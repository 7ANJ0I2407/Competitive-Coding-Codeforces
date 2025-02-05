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
    vi a(n + 2);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = INT_MAX, a[n+1] = INT_MIN;
    vi components(n + 5, 0), color(n+2, -5);
    int col = 0;
    for(int i = 0; i < n + 2;) //1e9 1 2 12 3 5 7 ... -1e9
    {
        col++;
        color[i++] = col;
        while(i <= n && a[i-1] < a[i]) color[i++] = col;
    }
    // i got the segments [1e9] [1 2 12] [3 5 7] [....] [-1e9]
    for(int i = 1; i <= n; i++) components[color[i]]++;
    // i got the component size;
    // now i can remove either the last or the first element of the segement
    // how ?
    // check the second first/ last element of segment and compare 2 segments to merge it
    int res = *max_element(all(components));
    for(int i = 1; i <= n; i++)
    {
        if(color[i-1] != color[i+1] && a[i-1] < a[i+1])
        {
            res = max(res, components[color[i-1]] + components[color[i+1]] - 1);
        }
    }
    cout << res << endl;
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