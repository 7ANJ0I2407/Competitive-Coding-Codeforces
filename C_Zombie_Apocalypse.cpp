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

void solve()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vi a(50);
    for(int i = 0; i < s.size(); i++)
    {
        a[s[i] - 'a']++;
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < k; i++) ans += a[i];
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