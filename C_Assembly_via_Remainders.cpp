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
    int n;
    cin >> n;
    vi a(n-1);
    int maxi = INT_MIN;
    for(int i = 0; i < n-1; i++) 
    {
        cin >> a[i];
        maxi = max(a[i], maxi);
    }
    vi ans(n);
    ans[0] = max(maxi, a[0] + 1); // to overcome of the max element is the first one...
    for(int i = 1; i < n;i++)
    {
        ans[i] = ans[i-1] + a[i-1];
    }
    for(auto m : ans) cout << m << ' ';
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