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
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

bool solve(string s, int n, int k)
{
    for(int i = 0; i < n - k + 1; i++)
    {
        if(s[i] == '0')
        {
            for(int j = i; j < i + k;j++)
            {
                if(s[j] == '0') s[j] = '1';
                else s[j] = '0';
            }
        }
    }
    for(auto i : s)
    {
        if(i == '0') return false;
    }
    return 1;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
    int n;
    string s;
    cin >> n >> s;
    int i = n - 1, ans = 1;
    while(i > 0)
    {
        if(solve(s, n, i + 1))
        {
            ans = i + 1;
            break;
        }
        i--;
    }
    cout << ans << endl;
// solve();
}

return 0;
}