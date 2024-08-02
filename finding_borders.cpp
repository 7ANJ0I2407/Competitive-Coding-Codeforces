#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

const int mod = 1e9 + 7;

int bin_pow(int a, int n, int mod) {
    int res = 1;
    while (n) {
        if (n & 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}

int mod_inv(int a, int mod) {
    return bin_pow(a, mod - 2, mod);
}

void solve() {
    string s;
    cin >> s;
    int p = 37;
    int n = s.size();
    vector<int> hash(n, 0);
    
    hash[0] = s[0] - 'a' + 1;
    for (int i = 1; i < n; i++) {
        hash[i] = (hash[i - 1] + (s[i] - 'a' + 1) * bin_pow(p, i, mod)) % mod;
    }
    
    for(int len = 1; len < n; len++) {
        int preHash = hash[len - 1];
        int sufHash = ((hash[n - 1] - hash[n - len - 1] + mod) * mod_inv(bin_pow(p, n - len, mod), mod)) % mod;
        if(preHash == sufHash) {
            cout << len << " ";
        }
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0); 
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
