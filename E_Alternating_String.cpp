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
    int ans = n;
    if(n % 2 == 0)
    {
        vector<vector<int> > check(2, vector<int>(26, 0));
        for(int i = 0; i < n; i++)
        {
            check[i % 2][s[i] - 'a']++;
        }
        for(int i = 0; i < 2; i++)
        {
            int mx = 0;
            for(int j = 0; j < 26; j++)
            {
                mx = max(mx, check[i][j]);
            }
            ans -= mx;
        }
        cout << ans << endl;
        return;
    }
    else {
        vector<vector<int> > pref(2, vector<int>(26, 0));
        vector<vector<int> > suff(2, vector<int>(26, 0));
        for(int i = n-1; i >= 0; i--)
        {
            suff[i % 2][s[i] - 'a']++;
        }
        for(int i = 0; i < n; i++)
        {
            suff[i % 2][s[i] - 'a']--;
            int res = n;
            for(int j = 0; j < 2; j++)
            {
                int mx = 0;
                for(int k = 0; k < 26; k++)
                {
                    mx = max(mx, suff[1-j][k] + pref[j][k]);
                }
                res -= mx;
            }
            ans = min(ans, res);
            pref[i % 2][s[i] - 'a']++;
        }
        cout << ans << endl;
    }
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