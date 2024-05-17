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
    string s;
    cin >> n >> s;
    vi pre(n+1, 0);
    for(int i = 1; i <= n; i++) pre[i] = pre[i-1] + (s[i-1] == '0');
    int idx = -1;
    int seen_zero = 0;
    int seen_one = 0;
    int curr_diff = -1;
    for(int i = 0; i <= n; i++)
    {
        seen_zero = pre[i];
        seen_one = (n - i) - (pre[n] - pre[i]);
        if(seen_zero * 2 >= i && seen_one* 2 >= (n-i))
        {
            if(abs(n - 2 * i) < (n - 2 * idx))
            {
                idx = i;
            }
        }
    }
    cout << idx << endl;
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