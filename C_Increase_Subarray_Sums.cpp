#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    for(auto &i : a) cin >> i;
    vi pref(n + 1, INT_MIN); 
    pref[0] = 0;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = i; j < n; j++)
        {
            sum += a[j];
            pref[j - i + 1] = max(pref[j - i + 1], sum); // sum of subarray of length j - i + 1
        }
    }
    // i got each length subarray sum
    // now i will find the maximum subarray sum of length i
    // for(auto &i : pref) cout << i << " ";
    // cout << endl;
    vi ans(n+1, 0);
    for(int i = 0; i <= n; i++) // length of subarray
    {
        int curr = 0;
        for(int j = 0; j <= n; j++) // length of subarray
        {
            curr = max(curr, pref[j] + min(i , j) * x);
        }
        ans[i] = curr;
    }
    for(int i = 0; i <= n; i++)
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