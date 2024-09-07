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
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    string s;
    cin >> s;
    int start = 0, end = n - 1;
    vi pref(n+1, 0);
    for(int i = 0; i < n; i++)
    {
        pref[i+1] = pref[i] + a[i];
    }
    int ans = 0;
    // 0 pref[i] pref[i+1] pref[i+2] ...
    // 0 1 2 3 4 5 6 7 8 9 10
    // forall(i, n+1, 1) cout << pref[i] << " ";
    while(start < end)
    {
        if(s[start] == 'L' && s[end] == 'R') 
        {
            ans += (pref[end+1] - pref[start]);
            start++;
            end--;
        }
        else if(s[start] != 'L') start++;
        else if(s[end] != 'R') end--;
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