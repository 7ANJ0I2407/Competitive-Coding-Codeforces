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

void solve()
{
    int n;
    cin >> n;
    if(n == 1) 
    {
        cout << 1 << endl;
        return;
    }
    if(n == 2) 
    {
        cout << -1 << endl;
        return;
    }
    int low = 1, high = n*n;
    vector<int> ans;
    for(int i = 1; i <= high; i++)
    {
        if(i % 2 == 1) ans.pb(i);
    }
    for(int i = 2; i <= high; i++)
    {
        if(i % 2 == 0) ans.pb(i);
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0;j < n; j++)
        {
            cout << ans[i*n+j] << " ";
        }
        cout << endl;
    }
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