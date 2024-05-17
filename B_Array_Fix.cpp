#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
// #include <bits/stdc++.h>
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

void solve()
{
    int n;
    cin >> n;
    vi a(n);

    forall(i, n, 1) cin >> a[i];
    vi x({a[n - 1]});
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > x.back())
        {
            x.push_back(a[i] % 10);
            x.push_back(a[i] / 10);
        }
        else
            x.push_back(a[i]);
    }
     cout << (is_sorted(x.rbegin(), x.rend()) ? "YES" : "NO") << endl;
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