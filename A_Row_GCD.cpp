#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
//#include <bits/stdc++.h>
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

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    vi b(m);
    forall(i, m, 1) cin >> b[i];
    int g = 0;
    for(int i = 1; i < n; i++) g = gcd(g, a[i] - a[0]);
    int p = 0;
    forall(i, m, 1) cout << gcd(g, a[0] + b[i]) << " ";
    cout << endl;
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