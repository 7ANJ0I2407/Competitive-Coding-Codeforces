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
    set<int> s;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    int x, y, z, i=0;
    sort(all(a));
    if(s.size() > 3)
    {
        cout << "NO" << endl;
        return;
    }
    if(s.size() < 3 || (n == 3 && a[0] + a[2] == 2 * a[1]))
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        for(auto& it:s)
      {
        if(i==0)x=it;
        if(i==1)y=it;
        if(i==2)z=it;
        i++;
      }
      if(y-x==z-y)
      {
        cout << "YES" << endl;
        return;
      }
    }
    cout << "NO" << endl;
    
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