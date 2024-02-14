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
    int n; cin >> n;
    vi a(n);
    forall(i,n,1)  
    {
        cin >> a[i];
    }
    int f = a[0];
    int l = a[n-1];
    int i = 1, j = n-1;
    while(a[i] == f && i < n) i++;
    while(a[j] == f && j > i) j--;
    int ans = abs(j - i + 1);
    j = n-2;
    i = 0;
    while(a[i] == l && i < n) i++;
    while(a[j] == l && j > i) j--;
    ans = min(ans, abs(j - i + 1));
    if(ans == n)
    {
        cout << 0 << endl;
        return;
    }
    cout << ans << endl;
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