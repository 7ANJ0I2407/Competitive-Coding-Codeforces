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
    vi a(n);
    forall(i, n, 1) cin >> a[i];
    sort(all(a));
    int curr = n;
    int ans = 0;
    int taken = 0;
    for(auto x : a)
    {
        int temp = (x - taken) * curr; // how many lemons we can buy
        curr--; // we can buy one less lemon
        if(temp >= k)  // if we can buy all the lemons
        {
            ans += k;
            break;
        }
        else {
            k -= temp;
            ans += temp + 1;
        }
        taken = x;
    }
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