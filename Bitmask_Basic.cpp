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
    vi a = {1, 2, 3, 4};
    int n = a.size();
    int p = 1 << n;
    vi res(p);
    vi dp(p, 0);
    for(int mask = 1; mask < p; mask++)
    {
        // for(int bit = 0; bit < n; bit++) // over all the bit
        // {
        //     if(mask & (1 << bit)) // if the bit is set
        //     {
        //         // cout << a[bit] << " ";
        //         res[mask] += a[bit];
        //     }
        // }
        // // cout << endl;
        res[mask] = res[mask & (mask - 1)] + a[__builtin_ctz(mask)];
    }
    // cout << endl;
    for(int i = 0; i < p; i++)
    {
        // cout << res[i] << " ";

    }
    // cout << endl;
    // int t = 8; // 1000
     // 10010 
     // 01101 + 1 = 01110
     // 10010 & 01110 = 00010
    // cout << __builtin_ctz(t & -t) << endl;

    // how to cehck for submask
    for(int mask = 0; mask < p; mask++)
    {
        for(int sub = 0; sub < p; sub++)
        {
            // if((sub & mask) == sub) cout << mask << ' ' << sub << endl;
            // if((sub | amask) == mask) cout << mask << ' ' << endl;
        }
    }
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