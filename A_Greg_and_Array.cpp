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
#define int unsigned long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

void solve()
{
    int n,m,k;
    cin >> n >> m >> k;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    vector<vector<int> > q;
   for(int i = 0; i < m; i++)
    {
        int l,r,d;
        cin >> l >> r >> d;
        l--;
        r--;
        q.pb({l,r,d});
    }
    vector<int> cnt(m+1,0);
    for(int i = 0; i < k; i++)
    {
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        if(x >= 0) cnt[x]++;
        if(y+1 < n) cnt[y+1]--;
    } 
    vector<int> ans(n+1,0);
    int sum = 0;
    for(int i=0; i < m; i++)
    {
        sum += cnt[i];
        q[i][2] *= sum;
        ans[q[i][0]] += q[i][2];
        ans[q[i][1]+1] -= q[i][2];
    }
    sum = 0;
    for(int i = 0; i < n + 1; i++)
    {
        sum += ans[i];
        ans[i] = sum;
    }
    // forall(i,n,1) ans[i] += a[i];
    for(int i = 0; i < n ; i++) cout << ans[i] + a[i] << " ";
    return;
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