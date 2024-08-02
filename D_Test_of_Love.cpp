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
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    s = 'L' + s + 'L';
    int curr = 0;
    int swim = 0;
    while(curr <= n)
    {
        if(s[curr] == 'C') break;
        if(s[curr] == 'W')
        {
            swim++;
            curr++;
            continue;
        }  
        // assert(s[curr] == 'L');
        bool flag = false;
        for(int i = min(curr + m, n+1); i > curr; i--)
        {
            if(s[i] == 'L')
            {
                curr = i;
                flag = true;
                break;
            }
        }
        if(flag) continue;
        for(int i = min(curr + m, n+1); i > curr; i--)
        {
            if(s[i] == 'W')
            {
                curr = i;
                flag = true;
                break;
            }
        }  
        if(!flag) break;
    }
    cout << (swim <= k && curr > n ? "YES" : "NO") << endl;
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