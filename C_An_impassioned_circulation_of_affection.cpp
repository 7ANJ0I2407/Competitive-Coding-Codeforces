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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dp[27][1600] = {0};
    for(char i = 0; i < 26; i++)
    {
        for(int j = 0; j < n; j++)
        {
            int replaced = 0;
            for(int k = j; k < n; k++)
            {
                if(s[k] - 'a' != i) replaced++;
                dp[i][replaced] = max(dp[i][replaced], k - j + 1);
            }
        }
        for(int j = 1; j < 1600; j++)
        {
            dp[i][j] = max(dp[i][j], dp[i][j - 1]);
        }
    }
    int q;
    cin >> q;
    while(q--)
    {
        int m;
        char c;
        cin >> m >> c;
        cout << dp[c - 'a'][m] << endl;
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