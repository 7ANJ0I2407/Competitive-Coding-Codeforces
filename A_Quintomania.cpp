#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define pb push_back
#define pp pop_back
#define ll long long
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i, n, x) for(int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve() {
    int n;
    cin >> n;
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    
    bool f = true;
    forall(i, n - 1, 1) {
        int diff = abs(a[i] - a[i + 1]);
        if (diff != 5 && diff != 7) {
            f = false;
            break;
        }
    }
    cout << (f ? "YES" : "NO") << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
