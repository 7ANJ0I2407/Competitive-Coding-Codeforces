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
#define mod 1000000007

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 0;
    //try to do it using dp
    // if the first char is Q then find the next A either we can take it or dont take it 
    //then find the next Q either we take it or not take it
    // uze prefix sum to store the Q before the A and after the A and the 
    //result will be the product of both where A exist
    vi pref(n+1, 0);
    vi suff(n+1, 0);
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'Q') 
        {
            pref[i] = 1;
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] == 'Q') 
        {
            suff[i] = 1;
        }
    }
    for(int i = 1; i < n; i++)
    {
        pref[i] += pref[i-1];
        suff[n - i - 1] += suff[n - i];
    }
    // for(int i = 0; i < n; i++)
    // {
    //     cout << pref[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < n; i++)
    // {
    //     cout << suff[i] << " ";
    // }
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'A') ans += pref[i] * suff[i];
    }
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