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
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    bool z = false, o = false;
    forall(i, n, 1)
    {
        if(a[i] & 1) o = true;
        else z = true;
    }
    if(z && o)
    {
        cout << -1 << endl;
        return;
    }
    else {
        vi ans;
        for(int i = 29; i >= 0; i--)
        {
            int x = 1 << i;
            ans.pb(x);
        }
        if(z) ans.pb(1);
        cout << ans.size() << endl;
        forall(i, ans.size(), 1) cout << ans[i] << ' ';
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