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
    vi a;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.pb(x);
    }
    int sum = 0;
    int negMax = INT_MIN;
    int posMin = INT_MAX;
    forall(i,n,1)
    {
        if(a[i] < 0 && a[i] % 2 != 0)
        {
            negMax = max(negMax, a[i]);
        }
        if(a[i] > 0 && a[i] % 2 != 0)
        {
            posMin = min(posMin, a[i]);
        }
        if(a[i] > 0) sum += a[i];
    }
    if(sum % 2) cout << sum << endl;
    else cout << sum - min(abs(negMax), posMin) << endl;


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