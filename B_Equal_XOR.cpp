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
#define all(x) x.begin(), x.end()

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(2*n, 0), b(n + 1, 0);
    k = 2*k;
    for(int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    // for(int i = 0; i <= n; i++) cout << b[i] << ' ';
    // cout << endl;

    vi g1, g2, g0;
    for(int i = 1; i <= n; i++)
    {
        if(b[i] == 0) g0.pb(i);
        else if(b[i] == 1) g1.pb(i);
        else g2.pb(i);
    }

    int cnt = 0;
    for(auto v : g2)
    {
        if(cnt < k)
        {
        cnt+= 2;
        cout << v << ' ' << v << ' ';
        }
    }
    for(auto v : g1)
    {
        if(cnt < k)
        {
            cout << v << ' ';
            cnt++;
        }
    }
    cout << endl;
    cnt = 0;
    for(auto v : g0)
    {
        if(cnt < k)
        {
        cnt+= 2;
        cout << v << ' ' << v << ' ';
        }
    }
    for(auto v : g1)
    {
        if(cnt < k)
        {
            cout << v << ' ';
            cnt++;
        }
    }
    cout << endl;
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