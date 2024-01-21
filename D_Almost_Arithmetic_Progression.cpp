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
    int n;
    cin >> n;
    int a[n];
    forall(i,n,1) cin >> a[i];
    int x,y,cnt,diff,prev,ans = n+1;
    int d1[] = { -1, 0, 1}, d2[] = { -1, 0, 1};
    bool check = false;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            x = a[0] + d1[i];
            y = a[1] + d2[j];
            prev = y; check = true;
            cnt = (x == a[0] ? 0 : 1) + (y == a[1] ? 0 : 1);
            // cout << cnt << endl;
            for(int k=2;k<n;k++)
            {
                diff = (y-x) - (a[k] - prev);
                if(abs(diff) > 1)
                {
                    check = false;
                    break;
                }
                if(diff != 0) cnt++;
                prev = a[k] + diff;
            }
            if(check) ans = min(ans,cnt);
        }
    }
    if(ans == n+1) cout << -1 << endl;
    else cout << ans << endl;
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