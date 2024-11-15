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
    map<int, string> m;
    m[2] = "2";
    m[3] = "3";
    m[4] = "322";
    m[5] = "5";
    m[6] = "53";
    m[7] = "7";
    m[8] = "7222";
    m[9] = "7332";
    string ans = "";
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0' || s[i] == '1') continue;
        ans += m[s[i]-'0'];
    }
    sort(all(ans), greater<char>());
    cout << ans << endl;
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