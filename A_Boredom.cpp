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
    map<int , int> mp;
    forall(i , n, 1) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int dp[100001] = {0};
    dp[0] = 0;
    dp[1] = mp[1];
    for(int i = 2; i < 100001; i++) dp[i] = max(dp[i-1], mp[i] * i + dp[i-2]);
    cout << dp[100000] << endl;
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