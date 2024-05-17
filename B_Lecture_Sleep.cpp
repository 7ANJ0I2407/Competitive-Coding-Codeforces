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
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n+1, 0), b(n+1, 0);
    forall(i,n,1) cin >> a[i];
    forall(i,n,1) cin >> b[i];
    int ans = 0;
    forall(i,n,1)
    {
        if(b[i]) ans += a[i];
    }
    int curr_sum = 0;
    for(int i = 0; i < k; i++)
    {
        if(!b[i]) curr_sum += a[i];
    }
    int max_sum = curr_sum;
    for(int i = k; i < n; i++)
    {
        if(!b[i]) curr_sum += a[i];
        if(!b[i-k]) curr_sum -= a[i-k];
        // cout << curr_sum << endl;
        max_sum = max(curr_sum, max_sum);
    }
    cout << ans + max_sum << endl;
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