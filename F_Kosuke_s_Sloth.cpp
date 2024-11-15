#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<deque>
#include<bits/stdc++.h>
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
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
const int mod = 1e9 + 7;

int mod_mul(int a, int b, int m) {
    return ((a % m) * (b % m)) % m;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    int pos = 2, a = 1, b = 1;
    if (k == 1) {
        cout << n % mod << endl;
        return;
    }
    while (true) {
        int current_fib = (a + b) % k;
        pos++;
        if (current_fib == 0) {
            cout << mod_mul(pos, n, mod) << endl;
            return;
        }
        a = b;
        b = current_fib;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
