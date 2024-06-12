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
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

// int demon_health;

bool find(const vector<int> &d, const vector<int> &c, int m, int demon_health) {
    int damage = 0;
    for (int i = 0; i < d.size(); ++i) {
        // Calculate how many times this attack can be used in `m` turns
        int attacks_in_m_turns = (m / (c[i] + 1)) * d[i];
        damage += attacks_in_m_turns;
        if (damage >= demon_health) return true;
    }
    return damage >= demon_health;
}

void solve() {
    int h, n;
    cin >> h >> n;
    // demon_health = h;

    vector<int> dam(n);
    vector<int> cool(n);

    forall(i, n, 1) {
        cin >> dam[i];
    }
    forall(i, n, 1) {
        cin >> cool[i];
    }

    int l = 0, hii = 1e13;
    while (hii - l > 1) {
        int mid = (l + hii) / 2;
        if (find(dam, cool, mid, h)) {
            hii = mid;
        } else {
            l = mid;
        }
    }
    if(find(dam, cool, l, h))
        {
            cout << l + 1 << endl;
            return;
        }
        cout << hii + 1 << endl;
        // cout << demon_health << endl;
        // cout << endl;

    // cout << hii << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
