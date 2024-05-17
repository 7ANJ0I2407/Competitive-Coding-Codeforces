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

const int MOD = 1e9 + 7;

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    int currS = 0, maxS = 0;
    for(int i = 0; i < n; i++)
    {
        currS += a[i];
        currS = max(currS, 0LL); 
        maxS = max(maxS, currS);
    }
    for(int i = 1; i <= k; i++)
    {
        maxS %= MOD;
        a.pb(maxS);
        maxS = max(maxS, maxS + maxS);
    }
    int ans = 0;
    for(auto it : a) ans += (it) % MOD;
    cout << (((ans % MOD) + MOD) % MOD) << endl;
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