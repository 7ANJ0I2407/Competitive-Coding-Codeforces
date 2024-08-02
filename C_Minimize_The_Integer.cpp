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
    int n = s.size();
    string ans;
    vector<char> odd, even;
    forall(i, n, 1)
    {
        if((s[i] - '0') % 2 == 0) even.pb(s[i]);
        else odd.pb(s[i]);
    }
    int i = 0, j = 0;
    while(i < even.size() && j < odd.size())
    {
        if(even[i] < odd[j]) ans += even[i++];
        else ans += odd[j++];
    }
    while(i < even.size()) ans += even[i++];

    while(j < odd.size()) ans += odd[j++];
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