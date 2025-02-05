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
    vi arr(n+1);
    cout << "? 1 " << n << endl;
    int sum, prev;
    cin >> sum;
    prev = sum;
    for(int i = 1; i < n-1; i++)
    {
        cout << '?' << ' ' << i + 1 << ' ' << n << endl;
        int q;
        cin >> q;
        arr[i] = prev - q;
        prev = q;
    }
    cout << "? 1 " << n-1 << endl;
    int q;
    cin >> q;
    arr[n] = sum - q;
    prev = 0;
    for(int i = 1; i <= n; i++)
    {
        if(i == n-1) continue;
        prev += arr[i];
    }
    arr[n-1] = sum - prev;
    cout << "! ";
    for(int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

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