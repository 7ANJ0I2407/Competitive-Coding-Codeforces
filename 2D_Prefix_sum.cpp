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
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int x, y;
    cin >> x >> y;
    vector<vector<int> > a(x, vector<int>(y, 0));
    forall(i, x, 1) {
        forall(j, y, 1) {
            cin >> a[i][j];
        }
    } 
    vector<vector<int> > pref(x, vector<int>(y, 0));
    pref[0][0] = a[0][0];
    for(int i = 1; i < x; i++) {
        pref[i][0] = pref[i - 1][0] + a[i][0];
    }
    for(int i = 1; i < y; i++) {
        pref[0][i] = pref[0][i - 1] + a[0][i];
    }
    for(int i = 1; i < x; i++) {
        for(int j = 1; j < y; j++) {
            pref[i][j] = pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1] + a[i][j];
        }
    }
    int q;
    cin >> q;
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        x1--, y1--, x2--, y2--;
        int ans = pref[x2][y2];
        if (x1 > 0) {
            ans -= pref[x1 - 1][y2];
        }
        if (y1 > 0) {
            ans -= pref[x2][y1 - 1];
        }
        if (x1 > 0 && y1 > 0) {
            ans += pref[x1 - 1][y1 - 1];
        }
        cout << ans << endl;
    }  

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