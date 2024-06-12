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
    vi a(n), b(n+1);
    forall(i,n,1) cin >> a[i];
    forall(i,n+1,1) cin >> b[i];
    bool flag = false;
    int ans = 1;
    int miniAns = 1e9;
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i]) ans += abs(a[i] - b[i]);
        int maxi = max(a[i], b[i]);
        int mini = min(a[i], b[i]);
        if(b[n] >= mini && b[n] <= maxi) miniAns = 0;
        miniAns = min(miniAns, min(abs(b[n] - mini), abs(b[n] - maxi)));
    }
    cout << ans + miniAns<< endl;
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