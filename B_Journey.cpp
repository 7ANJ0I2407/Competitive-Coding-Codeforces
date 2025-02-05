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
    int n, a, b, c;
        cin >> n >> a >> b >> c;
        int t = 0;
        int d = 0;
        int sum = a + b + c;
        if (n <= sum) {
            if (n <= a) {
                d = 1;
            } else if (n <= a + b) {
                d = 2;
            } else {
                d = 3;
            }
        } else {
            d = (n / sum) * 3;
            t = (n / sum) * sum;
            if (t >= n) {
                cout << d << endl;
                return;
            }
            if (t + a >= n) {
                d++;
            } else if (t + a + b >= n) {
                d += 2;
            } else {
                d += 3;
            }
        }
        cout << d << endl;
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