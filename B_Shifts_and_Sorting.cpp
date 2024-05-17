#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
//#include <bits/stdc++.h>
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

void solve()
{
    string s;
    cin >> s;
    int zeros = 0;
    for(auto m : s) 
    if (m == '0') zeros++;
    int ans = 0;
    vector<int> mp(2,0);
    for(auto m : s)
    {
        mp[m - '0']++;
        if(m == '0') ans += (mp[1] > 0 ? 1 : 0);
        else ans += zeros - mp[0];
    }
    cout << ans << endl;
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