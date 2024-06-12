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
    int n, f, k;
    cin >> n >> f >> k;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int x = a[f-1];
    sort(all(a), greater<int>());
    int cnt = 0;
    for(int i = k; i < n; i++)
    {
        if(a[i] == x) cnt++;
    }
    if(a[k-1] == x && a[k] == x)
    {
        cout << "MAYBE" << endl;
        return;
    }
    else if(cnt) cout << "NO" << endl;
    else cout << "YES" << endl;
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