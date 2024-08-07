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

const int MOD = 1e9 + 7;

int power(int n, int r, int m = 1e9 + 7)
{
    if(r == 0) return 1;
    if(r % 2 == 0)
    {
        int y = power(n, r/2, m);
        return (y*y) % m;
    }
    return (n * power(n, r-1, m)) % m;
}

void solve()
{
    int l, r, k;
    cin >> l >> r >> k;
    int maxi = power((9/k + 1), r) % MOD;
    int mini = power((9/k + 1), l) % MOD;
    int res =( maxi - mini + MOD) % MOD;
    cout << res % MOD << endl;
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