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

const int MOD = 1e9 + 7;

int intersection(int x, int l1, int r1, int l2, int r2)
{
    int l3 = ((l2 + x - 1)/x); // ceil(l2/x)
    int r3 = (r2/x); // floor(r2/x)
    // check intersection between [l1, r1] and [l3, r3]
    int left = max(l1, l3); 
    int right = min(r1, r3);
    return max(0ll, (right - left + 1));
}

void solve()
{
    int k, l1, r1, l2, r2;
    cin >> k >> l1 >> r1 >> l2 >> r2;
    int ans = 0;
    int x = 1;
    while(x <= MOD)
    {
        ans += intersection(x, l1, r1, l2, r2);
        x *= k;
    }
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