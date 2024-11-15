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
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n+1, 1);
    int p = -1;
    for(int i = x + 1; i <= n; i++)
    {
        a[i] = p;
        p *= -1;
    }
    p = -1;
    for(int i = y - 1; i >= 1; i--)
    {
        a[i] = p;
        p *= -1;
    }
    for(int i = y; i <= x; i++) a[i] = 1;
    for(int i = 1; i <= n; i++) cout << a[i] << " ";
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