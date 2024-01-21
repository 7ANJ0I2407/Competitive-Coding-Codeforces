#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
// #include<bits/stdc++.h>
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
    int c= INT_MAX,b=INT_MAX,ans=0;
    int n;
    cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    forall(i,n,1)
    {
        if(c > b) swap(c,b);
        if(a[i] <= c) c = a[i];
        else if (a[i] <=b) b = a[i];
        else {
            c = a[i];
            ans++;
        }
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