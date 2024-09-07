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

int binpow(int a, int b, int m)
{
    a %= m;
    int res = 1;
    while(b > 0)
    {
        if(b & 1)
        {
            res = res * a % m;
        }
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    forall(i, n, 1)
    {
        cin >> a[i];
    }
    int diff = 0, maxi = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] < maxi) 
        {
            diff = max(diff,(maxi - a[i]));
        }
        maxi = max(maxi, a[i]);
    }
    int ans = 0, p = 0;
    while(diff > 0)
    {
        diff -= binpow(2, p, LLONG_MAX);
        p++;
        ans++;
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