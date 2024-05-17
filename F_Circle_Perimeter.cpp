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
#define all(x) x.begin(), x.end()

void solve()
{
    int r;
    cin >> r;
    int ans = 0;
    for (int x = 0; x < r; x++)
    {
        int v = 0;
         int lo = 0, hi = r;
        while (lo != hi)
        {
            int mid = (lo + hi + 1) / 2;
            if (x*x + mid * mid < r * r)
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        v += 2*lo + 1;
        if (x == 0) ans += v;
        else ans += 2*v;
    }
    r++;
    int ans1 = 0;
    for (int x = 0; x < r; x++)
    {
        int v = 0;
         int lo = 0, hi = r;
        while (lo != hi)
        {
            int mid = (lo + hi + 1) / 2;
            if (x*x + mid * mid < r * r)
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        v += 2*lo + 1;
        if (x == 0) ans1 += v;
        else ans1 += 2*v;
    }
    cout << ans1-ans << endl;
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