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
    int n,m;
    cin >> n >> m;
    vi a(m);
    forall(i,m,1) cin >> a[i];
    int mini = INT_MAX;
    sort(all(a));
    forall(i,m-n+1,1)
    {
        mini = min(mini,(a[i+n-1]-a[i]));
    }
    cout << mini << endl;
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