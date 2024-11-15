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
    int a = 0, b = 0;
    int f_a = n, l_a = -1, f_b = n, l_b = -1;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == 'A' && s[i+1] == 'B')
        {
            f_a = min(f_a, i);
            l_a = max(l_a, i);
        }
        else if(s[i] == 'B' && s[i+1] == 'A')
        {
            f_b = min(f_b, i);
            l_b = max(l_b, i);
        }
    }
    if(f_a != n && f_b != n)
    {
        if(abs(f_a - l_b) > 1 || abs(f_b - l_a) > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
    // cout << f_a << " " << l_a << " " << f_b << " " << l_b << endl;

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