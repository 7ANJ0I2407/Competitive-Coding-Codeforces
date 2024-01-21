#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include<iomanip>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<long double> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()

void solve()
{
    cout << fixed << setprecision(10);
    long double n , k;
    cin >> n >> k;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    sort(a.begin(),a.end());
    long double dist = max(a[0],k - a[n-1])*2.0;
    for(int i=0;i<n-1;i++)
    {
        dist = max(dist,(a[i+1]-a[i]));
    }
    cout << dist/2 << endl;
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