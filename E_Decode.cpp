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
#define forall1(i, n, x) for (int i = 1; i < n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
const int MOD = 1e9 + 7;

void solve()
{
    string s;
    cin >> s;

    int n = s.size();
    vector<int> a(n + 1);
    vector<int> ans(2 * n + 2, 0);
    forall(i, n, 1) a[i + 1] = a[i] + (s[i] == '1' ? 1 : -1);
    int res = 0;
    forall1(j, n + 1, 1)
    {
        ans[a[j - 1] + n] += j;
        res = (res + ans[a[j] + n] * (n - j + 1)) % MOD;
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