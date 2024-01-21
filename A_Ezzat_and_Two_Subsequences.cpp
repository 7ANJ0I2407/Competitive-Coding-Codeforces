#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <iomanip>
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
    cout << fixed << setprecision(9) << endl;
    int n;
    cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    sort(a.begin(),a.end(),greater<int>());
    double sum =0;
    for(int i=1;i<n;i++)
    {
        sum += a[i];
    }
    // cout << sum << endl;
    // cout << n-1 << endl;
    double rem = double(sum/(n-1));
    // cout << rem << endl;
    cout << (a[0]+rem) << endl;
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