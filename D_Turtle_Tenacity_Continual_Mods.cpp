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
    int mm = *min_element(all(a));
    int c = 0;
    bool f = false;
    for (auto m : a)
    {
        if (m == mm)
            c++;
        if ((m % mm != 0) && (mm != m))
            f = true;
    }
    if (c == 1 || f == true)
    {
        cout << "YES" << endl;
        return;
    }
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