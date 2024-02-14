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
    vi a(n);
    forall(i,n,1) cin >> a[i];
    int sum = 0;
    for(auto m : a) sum += m;
    // cout << sum << endl;
    int l = sum / n;
    int e = 0;
    forall(i,n,1)
    {
        if(a[i] >= l) e += abs( a[i] - l);
        else 
        {
            int r = abs(a[i] - l);
            if(r > e)
            {
                cout << "NO" << endl;
                return;
            }
            else 
            {
                a[i] += r;
                e -= r;
            }
        }
    }
    cout << "YES" << endl;


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