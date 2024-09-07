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
    forall(i, n, 1)
    {
        cin >> a[i];
    }
    sort(all(a));
    int pos = n-1;
    vi ans(n);
    if(n & 1)
    {
        ans[0] = a[n/2];
        forall(i, n/2, 1)
        {
            ans[pos--] = a[i];
            ans[pos--] = a[n-i-1];
        }
    }
    else {
        forall(i, n/2, 1)
        {
            ans[pos--] = a[i];
            ans[pos--] = a[n-i-1];
        }
    }
    forall(i, n, 1)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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