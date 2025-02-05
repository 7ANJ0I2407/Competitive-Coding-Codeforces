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
    // for(int i = 1; i < 300; i++)
    // {
    //     for(int j = i; j < 300; j++)
    //     {
    //         for(int k = j; k < 300; k++)
    //         {
    //             if((i * i) + (j * j) == (k * k) && (k + j == (i * i)))
    //             {
    //                 cout << i << ' ' << j << ' ' << k << endl;
    //             }
    //         }
    //     }
    // }
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 3; i * i <= 2 * n - 1; i += 2) ans++;
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