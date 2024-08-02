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
    vi a(n);
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int odd = 0, even = 0;
    int odd_idx = -1, even_idx = -1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even++;
            even_idx = i + 1;
        }
        else
        {
            odd++;
            odd_idx = i + 1;
        }
    }
    if(odd == 1)
    {
        cout << odd_idx << endl;
    }
    else cout << even_idx << endl;
    
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