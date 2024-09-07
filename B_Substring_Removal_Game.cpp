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
    vi a;
    forall(i, n, 1)
    {
        if(s[i] == '1')
        {
            int len = 0;
            int j = i;
            while(j < n && s[j] == '1')
            {
                j++;
            }
            len += j - i;
            a.pb(len);
            i = j;
        }
    }
    sort(all(a), greater<int>());
    int ans = 0;
    forall(i, a.size(), 2)
    {
        ans += a[i];
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