#include<iostream>
#include <bits/stdc++.h>
#include<set>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i = 0; i < n; i += x)
#define forall1(m,n,x) for(int i = m; i < n; i += x)
#define forall2(i,n,x) for(int i = m; i <= n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

int solverec(int s, int e, vector<vector<int> > & dp, vi & a)
{
    if(s >= e) return 0;
    if(dp[s][e] != -1) return dp[s][e];
    if(a[s] == a[e])
    {
        dp[s][e] = solverec(s + 1, e - 1, dp, a);
    }
    else
    {
        dp[s][e] = 1 + min(solverec(s + 1, e, dp, a), solverec(s, e - 1, dp, a));
    }
    return dp[s][e];
}

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> a[i];
    }
    // dp[i][j] = min number of moves to make a[i].....a[j] equal color or a palindrome;
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, 1e18));
    for(int i = 1; i <= n; i++)
    {
        dp[i][i] = 0;
    }
    for(int len = 2; len <= n; len++)
    {
        for(int i = 1; i + len - 1 <= n; i++)
        {
            int j = i + len - 1;
            if(len == 2)
            {
                if(a[i] == a[j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = 1;
                }
            }
            else
            {
                if(a[i] == a[j])
                {
                    dp[i][j] = dp[i + 1][j - 1];
                }
                else
                {
                    dp[i][j] = 1 + min(dp[i + 1][j], dp[i][j - 1]);
                }
            }
        }
    }
        cout << dp[1][n] << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
while(t--)
{
    int n;
    cin >> n;
    vi a(2);
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(i == 1)
        {
            a[1] = x;
            continue;
        }
        if(a.back() != x)
        {
            a.pb(x);
        }
    }
    if(n == 1) 
    {
        cout << 0 << endl;
        return 0;
    }
    n = a.size();
    vector<vector<int> > dp(n + 1, vector<int>(n + 1, -1));
    cout << solverec(1, n, dp, a) << endl;
}

return 0;
}