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
    int n, m;
    cin >> n >> m;
    vector<vector<int> > a(n, vector<int>(m));
    int xorAll = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        xorAll ^= a[i][0];
    }

    vector<int> b(n, 1);
    bool f = false;
    // cout << xorAll << endl;
    if(xorAll == 0)
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(a[i][0] != a[i][j]) 
                {
                    b[i] = j + 1;
                    xorAll = a[i][0] ^ a[i][j];
                    f = 1;
                    break;
                }
            }
            if(f) break;
        }
    }
    if(!f && xorAll == 0)
    {
        cout << "NIE" << endl;
        return;
    }
    cout << "TAK" << endl;
    for(auto x: b) cout << x << " ";
    cout << endl;
    
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