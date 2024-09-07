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
    int pos = 0, neg = 0, x = 0, y = 0;
    vi a(n), b(n);
    forall(i, n, 1) cin >> a[i];
    forall(i, n, 1) cin >> b[i];
    forall(i, n, 1)
    {
        if(a[i] > b[i]) x += a[i];
        else if(a[i] < b[i]) y += b[i];
        else {
            pos += (a[i] > 0);
            neg += (a[i] < 0);
        }
    }
    int ans = -1e18;
    for(int i = -neg; i <= pos; ++i)
    {
        ans = max(ans, min(x + i, y + (pos - neg - i)));
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