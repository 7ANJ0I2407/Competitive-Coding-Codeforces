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
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int a1 = 0, a2 = 0;
    forall(i, n, 1)
    {
        if(i & 1) a1 = max(a1, a[i]);
        else a2 = max(a2, a[i]);
    }
    a1 = a1 + n / 2;
    a2 = a2 + (n + 1) / 2;
    cout << max(a1, a2) << endl;
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