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
    int n, ksk = 0;
    cin >> n;
    vi a(n);
    forall(i, n, 1)
    {
        cin >> a[i];
        ksk += a[i];
    }
    if (ksk % 3 == 0)
    {
        cout << 0 << endl;
        return;
    }
    if ((ksk+1) % 3 == 0)
    {
        cout << 1 << endl;
        return;
    }
    forall(i,n,1)
    {
        int x = ksk - a[i];
        if(x % 3 == 0)
        {
            cout << 1 << endl;
            return;

        }
    }
    cout << 2 << endl;
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