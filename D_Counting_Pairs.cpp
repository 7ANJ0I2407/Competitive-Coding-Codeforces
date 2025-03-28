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
    int n; 
    cin >> n;
    int a, b; 
    cin >> a >> b;
    vi arr(n);
    int t = 0;
    forall(i, n, 1)
    {
        cin >> arr[i];
        t += arr[i];
    }
    sort(all(arr));
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        int cur = t - arr[i];
        if (cur < a)continue;
        int t1 = cur - a, t2 = 0;
        if (cur > b)t2 = cur - b;

        int l = upper_bound(arr.begin(), arr.end(), t2 - 1) - arr.begin();
        int r = upper_bound(arr.begin(), arr.end(), t1) - arr.begin();
        r--;
        if (r < l)continue;
        if (i >= l && i <= r)count -= 1;
        count += r - l + 1;
    }
    cout << count / 2 << endl;

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