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
    int n, m;
    cin >> n;
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    cin >> m;
    vi b(m);
    forall(i, m, 1) cin >> b[i];
    sort(all(a));
    sort(all(b));
    // forall(i, n, 1) cout << a[i] << " ";
    // cout << endl;
    // forall(i, m, 1) cout << b[i] << " ";
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(abs(a[i] - b[j]) <= 1)
            {
                ans++;
                b[j] = -999;
                a[i] = -999;
                break;
            }
        }
    }
    cout << ans << endl;
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