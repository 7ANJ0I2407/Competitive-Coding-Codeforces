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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    k--;
    vi ind;
    forall(i, n, 1) if(a[i] > a[k]) ind.pb(i);
    if(ind.size() == 0)
    {
        cout << n - 1 << endl;
        return;
    }
    int ans = ind[0] - 1;
    if(ind[0] == 0) ind[0] = 1;
    if(ind.size() > 1) ans = max(ans, min(k, ind[1]) - ind[0]); // if more than one cow is greater than kth cow
    else ans = max(ans, k - ind[0]); // if only one cow is greater than kth cow
    cout << ans << endl;
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