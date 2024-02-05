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
    int n, k, q;
    cin >> n >> k >> q;
    vi a(200005,0),b(200005,0);
    forall(i,n,1)
    {
        int x, y;
        cin >> x >> y;
        a[x]++;
        a[y+1]--;
    }
    int sum = 0;
    for(int i = 0; i < 200005; i++)
    {
        sum += a[i];
        b[i] = sum;
        if(b[i] >= k)
        {
            b[i] = 1;
        }
        else b[i] = 0;
    }
    for(int i = 1; i <= 200005; i++)
    {
        b[i] += b[i-1];
    }
    while(q--)
    {
        int m,n;
        cin >> m >> n;
        int ans = b[n];
        if(m-1 > 0)
        ans -= b[m-1];
        cout << ans << endl;
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