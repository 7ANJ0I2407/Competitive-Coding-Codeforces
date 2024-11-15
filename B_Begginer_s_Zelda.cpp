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
    vi a(n+1, 0);
    for(int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y]++;
    }
    // x -> y there is an edge between x and y.
    
    int ans = 0; // ans is the number of leaf nodes. we can always remove 2 leaf nodes and connect their parent node to the root node.
    for(int i = 1; i <= n; i++)
    {
        ans += (a[i] == 1); // if a[i] == 1, then it is a leaf node.
    }
    cout << (ans + 1) / 2 << "\n"; // if ans is odd, then we need to add 1 to it and then divide by 2.

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