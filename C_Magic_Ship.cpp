#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = count(all(s), 'L');
    int r = count(all(s), 'R');
    int u = count(all(s), 'U');
    int d = count(all(s), 'D');

    auto check = [&](int mid)-> int {
        int cL = (mid/n) * 1ll * l;
        int cR = (mid/n) * 1ll * r;
        int cU = (mid/n) * 1ll * u;
        int cD = (mid/n) * 1ll * d;
        for(int i = 0; i < mid % n; i++)
        {
            cL += (s[i] == 'L');  
            cR += (s[i] == 'R');
            cU += (s[i] == 'U');
            cD += (s[i] == 'D');
        }
        int fX = x1 + (cR - cL);
        int fY = y1 + (cU - cD);
        int dis = abs(fX - x2) + abs(fY - y2);
        return dis <= mid;
    };

    int lw = 0, hi = 1e15;
    int ans = 0;
    while(lw <= hi)
    {
        int mid = (lw + hi) / 2;
        if(check(mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else lw = mid + 1;
    }
    if(ans == 0) cout << -1 << endl;
    else cout << ans << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
while(t--)
{
solve();
}

return 0;
}