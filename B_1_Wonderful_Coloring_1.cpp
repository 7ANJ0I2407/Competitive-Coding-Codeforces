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
    string s;
    cin >> s;
    vi cnt(26, 0);
    forall(i, s.size(), 1)
    {
        cnt[s[i] - 'a']++;
    
    }
    int ans1 = 0, ans2 = 0;
    forall(i, 26, 1)
    {
        if(cnt[i] == 1) ans1++;
        else if(cnt[i] > 1) ans2++;
    }
    cout << ans1 / 2 + ans2 << endl;
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