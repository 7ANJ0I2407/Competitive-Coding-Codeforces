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
    cin >> n >> m;
    vi a(n, 0), b(n,0);
    forall(i,n,1) cin >> a[i];
    forall(i,n,1) cin >> b[i];
    int sum = 0;
    int ans = 1e20;
    for(int i = n-1; i >= 0; i--)
    {
        sum += min(b[i], a[i]);
        cout << sum << ' ';
        if(m > i)
        {
            ans = min(ans, sum - min(a[i], b[i]) + a[i]);
        }
        cout << ans << " ";
    }   
    cout << endl;
    cout << endl;
    // cout << ans << endl;
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