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
    vector<string> a(n);
    forall(i,n,1) cin >> a[i];
    int flag = 1;
    int cnt = 0;
    int ans = n;
    for(int i = 0; i < n; i++)
    {
        if(a[i].size() % 2 == 1) flag = 0;
        for(auto it : a[i])
        {
            if(it == '1') cnt++;
        }
    }
    if(flag == 1 && cnt % 2 == 1) ans--;
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