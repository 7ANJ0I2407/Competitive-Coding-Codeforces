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
    forall(i, n, 1) cin >> a[i];
    vi pref(n ,0);
    vi suff(n, 0);
    forall(i,n, 1)
    {
        if(a[i] >= i) pref[i] = 1;
        else break;
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] >= n-i-1) suff[i] = 1;
        else break;
    }
    forall(i, n, 1)
    {
        if(pref[i] && suff[i])
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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