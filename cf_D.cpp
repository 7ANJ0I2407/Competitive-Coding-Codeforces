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

int n;
bool check(int n)
{
    if(n == 1 || n == 0) return 0;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return 1;
}

void solve()
{
    cin >> n;
    if(check(n))
    {
        cout << 1 << endl;
        cout << n << endl;
    }
    else if(check(n-2))
    {
        cout << 2 << endl;
        cout << 2 << ' ' << n-2 << endl;
    }
    else{
        for(int i = n; i > max(2ll, n - 1000); i--)
        {
            if(check(i)) // i is the largest prime i got 
            {
                for(int j = n - i; j >= 2; j--)
                {
                    if(check(j) && check(n - i - j))
                    {
                        cout << 3 << endl;
                        cout << i << ' '  << j << ' ' << n - i - j << endl;
                        return;
                    }
                }
            }
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