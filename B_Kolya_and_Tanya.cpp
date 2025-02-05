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

int MOD = 1e9 + 7;

int bin_expo(int base, int pow)
{
    int ans = 1;
    while(pow)
    {
        if(pow & 1) ans = ans * base % MOD, pow--;
        else{
            base = base * base % MOD;
            pow /= 2; 
        }
    }
    return ans % MOD;
}

void solve()
{
    int n;
    cin >> n;
    cout << ((bin_expo(3, 3 * n) % MOD) - bin_expo(7, n) % MOD + MOD) % MOD << endl;
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