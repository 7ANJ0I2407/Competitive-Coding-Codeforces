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
    vector<bool> prime(1001, true);
    for(int i = 2; i < 1001; i++)
    {
        if(prime[i])
        {
            for(int j = 2 * i; j < 1001; j += i) prime[j] = 0;
        }
    }
    // i need to check till how many powers of prime factors are divisible ??
    vi res;
    for(int i = 2; i <= n; i++)
    {
        if(prime[i]) // current number is a prime .. now check for its multiples
        {
            int p = i;
            while(p <= n)
            {
                res.pb(p);
                p *= i;
            }
        }
    }
    cout << res.size() << endl;
    for(auto _ : res) cout << _ << ' ';
    cout << endl;

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