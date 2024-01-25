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
    int n; cin >> n;int cnt = 0;
    // map<int,int>mp;
    vi mp(70005,0);
    forall(i,n,1)
    {
        int x; cin >> x;
        mp[x]++;
    }
    forall(i,70005,1)
    {
        if(mp[i] > 1) cnt += mp[i] - 1,mp[i+1] += mp[i] - 1;
    }
    cout << cnt << endl;
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