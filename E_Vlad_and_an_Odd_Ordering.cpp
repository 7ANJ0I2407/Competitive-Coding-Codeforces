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
    vi a;
    int n,k; cin >> n >> k;
    while(n)
    {
        a.pb((n+1)/2);
        n /= 2;
    }
    int p = 1, t = 0;
    for(auto m : a)
    {
        if(t < k && k <= (t + m))
        {
            cout << p * (2 * (k - t) - 1) << endl;
            return;
        }
        p *= 2;
        t += m;
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