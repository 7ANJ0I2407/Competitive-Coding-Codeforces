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

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    vi c(32, 0);
    forall(i, n, 1)
    {
        for(int j = 0; j < 32; j++)
        {
            if(a[i] & (1 << j))
            {
                c[j]++;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i < 32; i++)
    {
        ans = __algo_gcd(ans, c[i]);
    }
    for(int i = 1; i <= n; i++)
    {
        if(ans % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
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