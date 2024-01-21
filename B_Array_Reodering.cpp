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

bool comp(int x,int y)
{
    return (x%2 < y%2);
}

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    sort(a.begin(),a.end(),comp);
    int ans=0;
    forall(i,n,1)
    {
        for(int j=i+1;j<n;j++)
        {
            ans += __algo_gcd(a[i],2*a[j]) >1;
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