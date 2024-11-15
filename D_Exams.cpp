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


bool isPossible(vi a, vi b, int mid)
{
    // cout << mid << endl;
    int n = a.size(), m = b.size();
    bool happened[m + 1];
    memset(happened, false, sizeof(happened));
    for(int i = 0; i < mid, i++)
    {
        if()
    }


}

void solve()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    forall(i, n, 1)
    {
        cin >> a[i];
    }
    vi b(m);
    forall(i, m, 1)
    {
        cin >> b[i];
    }
    int low = 1, high = n;
    while(low < high)
    {
        int mid = (low + high) / 2; // the days required to study to pass
        if(isPossible(a, b, mid))
        {
            high = mid;
        }
        else {
            low = mid + 1;
        }
    }
    // if(isPossible(a, b, low))
    // {
    //     cout << low << endl;
    // }
    // else {
    //     cout << -1 << endl;
    // }
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