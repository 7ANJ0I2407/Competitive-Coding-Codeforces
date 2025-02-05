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
#define forall1(m, n, x) for (int i = m; i < n; i += x)
#define forall2(i, m, n, x) for (int i = m; i <= n; i += x)
#define all(x) x.begin(), x.end()

void solve() {
    int l, r;
    cin >> l >> r;
    int ans = 0, a = 0, b = 0;
    for (int i = 30; i >= 0; i--) {
        int msb_l = 0, msb_r = 0;
        if (l & (1 << i)) {
            msb_l = 1;
        }
        if (r & (1 << i)) {
            msb_r = 1;
        }
        if (msb_l == msb_r) {
            ans += msb_l * (1 << i);
        } else {
            a = ans + (1 << i);
            b = a - 1;
            break;
        }
    }

    int c = 0;
    for (int i = l; i <= r; i++) {
        if ((a != i) && (b != i)) {
            c = i;
            break;
        }
    }

    cout << a << ' ' << b << ' ' << c << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
