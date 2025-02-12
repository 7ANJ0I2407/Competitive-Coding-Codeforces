#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int, int>
typedef vector<ll> vi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vi c(n);
    for (int i = 0; i < n; i++) cin >> c[i];
    int ans = 0;
    for (int i = 0; i < (1 << n); i++) // 2^n subsets
    {
        int sum = 0, mx = INT_MIN, mn = INT_MAX;
        for (int j = 0; j < n; j++) // check each subset one by one for validation
        {
            if (i & (1 << j))
            {
                sum += c[j];
                mx = max(mx, c[j]);
                mn = min(mn, c[j]);
            }
        }
        if (sum >= l && sum <= r && mx - mn >= x) ans++; // if valid subset, increment answer
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}