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
    int a, s;
    cin >> a >> s;
    vi ans;
    while(s)
    {
        ll x = a % 10;
        ll y = s % 10;
        if(x <= y) ans.pb(y - x);
        else {
            s /= 10;
            y += (s % 10) * 10;
            if(x < y && y >= 10 && y <= 19) ans.pb(y - x);
            else {
                cout << -1 << endl;
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if(a)
    {
        cout << -1 << endl;
        return;
    }
    while(ans.size() && ans.back() == 0) ans.pp();
    reverse(all(ans));
    forall(i, ans.size(), 1) cout << ans[i];
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