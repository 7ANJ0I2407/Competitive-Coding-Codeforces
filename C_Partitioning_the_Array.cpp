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
    vi a(n,0);
    forall(i,n,1) cin >> a[i];
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            int g = 0;
            for(int k = 0 ; i+k < n; k++) // check for the pair of two diff groups
            {
                g = __algo_gcd(abs(a[i+k] - a[k]), g); // next group elemt is at i + k and previos element at k
            }
            ans += (g != 1); // if gcd is > 1 then add into answer
        }
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