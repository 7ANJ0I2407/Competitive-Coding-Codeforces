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
    vector<string> a;
    forall(i, n, 1)
    {
        string x;
        cin >> x;
        a.pb(x);
    }
    forall(i, n, 1)
    {
        forall(j, m, 1)
        {
            if(a[i][j] == '.')
            {
                if((i + j) % 2 == 0) a[i][j] = 'B';
                else a[i][j] = 'W';
            }
        }
    }
    forall(i, n, 1)
    {
        cout << a[i] << endl;
    }
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