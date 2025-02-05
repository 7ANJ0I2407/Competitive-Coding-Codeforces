#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n;
    int k;
    cin >> n >> k;
    vi a(n), b(n);
    vi temp(2 * n);
    forall(i, n, 1) cin >> a[i];
    forall(i, n, 1) cin >> b[i];
    sort(all(a));
    sort(all(b));
    for (auto _ : a)
        temp.pb(_);
    for (auto _ : b)
        temp.pb(_);
    sort(all(temp));
    temp.erase(unique(all(temp)), temp.end());
    int res = 0;
    for (auto _ : temp)
    {
        int a1 = lower_bound(all(a), _) - a.begin();
        int a2 = lower_bound(all(b), _) - b.begin();
        int diff = (a1) - (a2);
        if (diff <= k)
        {
            int x = n - a2;
            int inc = _ * x;
            if (inc > res)
                res = inc;
        }
    }
    cout << res << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}