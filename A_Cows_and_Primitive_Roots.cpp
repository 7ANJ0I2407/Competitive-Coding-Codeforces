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

int mod_exp(int base, int exp, int mod) {
    int res = 1;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

void solve()
{
    int p;
    cin >> p;
    int res = 0;
    for(int i = 1; i <= p; i++)
    {
        vi power(p, i);
        for(int j = 2; j < p; j++)
        {
            power[j] = (power[j-1] * i) % p;
        }
        bool check = 0;
        for(int k = 1; k < p-1; k++)
        {
            if((power[k] - 1 + p) % p == 0)
            {
                check = 1;
                break;
            }
        }
        if(!check && (power[p-1] - 1 + p) % p == 0)
        {
            res++;
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