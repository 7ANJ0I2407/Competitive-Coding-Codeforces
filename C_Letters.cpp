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
    vi a(n);
    for(int i=1;i<=n;i++) cin >> a[i];
    ll index = 1,sum = 0;
    for(int i=1;i<=m;i++)
    {

        ll b;
        cin >> b;
        while(sum +a[index] < b)
        {
            sum+= a[index++];
        }
        cout << index << ' ' << b - sum << endl;
    }
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