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
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int m = t.size();
    int ans = 1;
    set<int> pos[26];
    for (int i = 0; i < n; i++)
    {
        pos[s[i] - 'a'].insert(i);
    }
    int cur = -1;
    for (int i = 0; i < m; i++)
    {
        int ch = t[i] - 'a';
        if (pos[ch].empty())
        {
            cout << -1 << endl;
            return;
        }
        auto it = pos[ch].upper_bound(cur);
        if (it == pos[ch].end())
        {
            ans++;
            cur = *pos[ch].begin();
        }
        else
        {
            cur = *it;
        }
    }
    cout << ans << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
while(t--)
{
solve();
}

return 0;
}