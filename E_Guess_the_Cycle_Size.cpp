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

int check(int x, int y)
{
    cout << "? " << x << ' ' << y << endl;
    int s;
    cin >> s;
    return s;
}

void solve()
{
    for(int i = 2; i <= 26; i++)
    {
        int x = check(1, i), y = check(i, 1);
        if(x == -1)
        {
            cout << "! " << i - 1 << endl;
            return;
        }
        if(x != y)
        {
            cout << "! " << x + y << endl;
            return;
        }
    }
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