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
    int n, last;

    cin >> n >> last;
    vi a;
    a.pb(0);
    forall(i,n,1)
    {
        int m;
        cin >> m;
        a.pb(m);
    }
    a.pb(last);
    vi ans;
    for(int i = 1; i < n+2; i++)
    {
        ans.pb(abs(a[i] - a[i - 1]));
    }
    ans[n] *= 2;
    cout << *max_element(ans.begin(),ans.end()) << endl;
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