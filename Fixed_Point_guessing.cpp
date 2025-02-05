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

int query(int l, int r)
{
    cout << "? " << l << ' ' << r << endl;
    int ans = 0;
    for(int i = l; i <= r; i++)
    {
        int x;
        cin >> x;
        if(x >= l && x <= r) ans++;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    int l = 1, r = n;
    int pos = -1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        int c = query(l, mid);
        // cout << "value of q is " << c << endl;
        if(c & 1) 
        {
            pos = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << "! " << pos << endl;
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