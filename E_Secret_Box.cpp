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

int f(int x, int y, int z, int k) {
    int maxi_l = 0;
    
    for (int a = 1; a <= min(x, k); ++a) {
        for (int b = 1; b <= min(y, k/a); ++b) {
            int c = k / (a * b);
            if (c <= z && a * b * c == k) {
                int l = (x - a + 1) * (y - b + 1) * (z - c + 1);
                maxi_l = max(maxi_l, l);
            }
        }
    }
    
    return maxi_l;
}

void solve()
{
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    int max_l = f(x, y, z, k);
    cout << max_l << endl;
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
