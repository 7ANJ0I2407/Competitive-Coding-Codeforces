#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
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

void solve() {
    int n, x;
    cin >> n >> x;
    long long ans = 0;
        for (int a = 1; a <= x; ++a) {
            int temp_b = min(x - a, n / a);
            for (int b = 1; b <= temp_b; ++b) {
                int c = min(x - a - b, (n - a * b) / (a + b));
                ans += max(0ll, c);
            }
        }
        cout << ans << endl;
    }

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
solve();
}

return 0;
}