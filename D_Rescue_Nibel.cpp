#include <bits/stdc++.h>
using namespace std;

#define MOD 998244353
#define int long long

const int MAXN = 300005; 

int fact[MAXN], invFact[MAXN];

// Function to compute x^y % MOD in O(log y)
int power(int x, int y) {
    int res = 1;
    while (y) {
        if (y & 1) res = (res * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
        invFact[i] = power(fact[i], MOD - 2);  // Using Fermat's theorem
    }
}

int comb(int n, int r) {
    if (r > n || r < 0) return 0;
    return (fact[n] * invFact[r] % MOD) * invFact[n - r] % MOD;
}

void solve() {
    precompute();
    vector<pair<int, int>> p;
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        p.push_back({x, 1});    
        p.push_back({y + 1, -1}); 
    }

    sort(p.begin(), p.end()); 

    int res = 0, active = 0;
    
    for(auto [point, type] : p) {
        if(type == 1) {  
            if(active >= k - 1 && active < MAXN) {  
                res = (res + comb(active, k - 1)) % MOD;
            }
            active++;
        } else {  
            active--;
        }
    }
    
    cout << res << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
