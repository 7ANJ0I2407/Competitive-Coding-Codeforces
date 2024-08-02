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
const int N (1e6 + 100);

void solve()
{
    int n;
    cin >> n;
    vi a(N);
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    for(int i = 0; i < N; i++)
    {
        a[i+1] += a[i] / 2;
        a[i] %= 2;
        ans += a[i];
    }  
    cout << ans << endl;
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