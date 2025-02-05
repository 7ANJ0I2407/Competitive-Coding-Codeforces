#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i = 0; i < n; i += x)
#define forall1(m,n,x) for(int i = m; i < n; i += x)
#define forall2(i,n,x) for(int i = m; i <= n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for(int i = 1; i <= n; i++) cin >> a[i];
    int ans = 0;
    vi pref(n + 1);
    // got prefix xor now i can check if i can spit it into 2 / 3 parts or not ?
    for(int i = 1; i <= n; i++)
    {
        pref[i] = pref[i - 1] ^ a[i];
    }
    // for 2 parts to be equal xor of both parts should be 0
    bool f = (pref[n] == 0);
    // leave one at left one at right and check for middle point if it is 0 then we can split it into 2 parts
    for(int i = 1; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(pref[i] == (pref[j] ^ pref[i]) && ((pref[j] ^ pref[i]) == (pref[n] ^ pref[j])))
            {
                f = 1;
            }
        }
    }
    if(f)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

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