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
    int n;
    cin >> n;
    vi a(n);
    vi prefix(n+1, 0);
    forall(i, n, 1) 
    {
        cin >> a[i];
        prefix[i+1] = prefix[i] + a[i];
    }
    // for(auto m : prefix) cout << m << ' ';
    // cout << endl;
    int sum = accumulate(all(a), 0ll);
    int maxi1 = INT_MIN, maxi2 = INT_MIN, mini1 = INT_MAX, mini2 = INT_MAX;
    forall(i, n, 1)
    {
        maxi1 = max(maxi1, prefix[i]);
        mini1 = min(mini1, prefix[i]);
    }
    // cout << maxi1 << ' ' << mini1 << endl;
    for(int i = 1; i <= n; i++)
    {
        maxi2 = max(maxi2, prefix[i]);
        mini2 = min(mini2, prefix[i]);
    }
    // cout << maxi2 << ' ' << mini2 << endl;
    if (max(maxi1-mini1, maxi2-mini2) < sum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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