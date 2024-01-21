#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
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
    int n ,q;
    cin >> n >> q;
    int a[n+2];
    forall(i,n+2,1) a[i] = 0;
    while(q--)
    {
        int l,r,k;
        cin >> l >> r >> k;
        a[l] += k;
        a[r+1] -=k;
    }
    for(int i=1;i<=n;i++)
    {
        a[i] += a[i-1];
    }
    for(int i=1;i<=n;i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
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