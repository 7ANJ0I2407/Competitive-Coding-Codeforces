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
    int n,cnt = 0; cin >> n;
    map<int,int> a;
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        a[x] = i;
    }
    if(n == 1)
    {
        cout << 0 << endl;
        return;
    }
    for(int i = 2; i <= n; i++)
    {
        if(a[i-1] > a[i]) cnt++;
    }
    cout << cnt << endl;
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