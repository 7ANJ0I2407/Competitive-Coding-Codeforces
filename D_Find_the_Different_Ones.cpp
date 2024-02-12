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
    forall(i,n,1) cin >> a[i];
    vi b;
    forall(i,n-1,1)
    {
        if(a[i] != a[i+1]) b.pb(a[i]);
    }
    // for(auto it : b) cout << it << ' ';
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin >> l >> r;
        l--; r--;
        auto it = lower_bound(all(b),l);
        // cout <<*it << endl;
        if(it != b.end() && *it < r)
        {
            cout << *it + 1 << ' ' << *it + 2 << endl;
        }
        else cout << "-1 -1" << endl;
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