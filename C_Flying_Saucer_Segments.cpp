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

int bin_power(int n, int y)
{
    if(n == 0) return 1 % y;
    int x = bin_power(n / 2, y);
    if(n % 2 == 0) return (x * x) % y;
    if(n % 2 == 1) return (3 * x * x) % y;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = bin_power(n, m);
    ans = (ans - 1) % m;
    if(ans < 0) ans += m;
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