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
    int n; cin >> n;
    if(n < 3)
    {
        cout << -1 << endl;
        return;
    }
    if(n % 2 == 1)
    {
        cout << ((n*n) - 1)/2 << ' ' <<  ((n*n) + 1)/2 << endl;
        return;
    }
    else cout << (n*n)/4 - 1 << ' ' << (n*n)/4 + 1 << endl;
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