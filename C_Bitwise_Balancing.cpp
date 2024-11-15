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
    int b, c, d;
    cin >> b >> c >> d;
    int ans = 0;
    for(int i = 0; i < 60; i++)
    {
        int bit_b = (b >> i) & 1;
        int bit_c = (c >> i) & 1;
        int bit_d = (d >> i) & 1;
        int bit_a = -1;
        for(int aa = 0; aa < 2; aa++)
        {
            if((aa | bit_b) - (aa & bit_c) == bit_d)
            {
                bit_a = aa;
            }
        }
        if(bit_a == -1)
        {
            cout << -1 << endl;
            return;
        }
        ans |= bit_a << i;
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