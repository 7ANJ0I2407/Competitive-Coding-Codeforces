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

int solve(int i, vi &a,vi &ans)
{
    if(i == a.size())
    {
        return 1;
    }
    ans.pb(a[i]);
    int x = solve(i+1,a,ans);
    ans.pp();
    int y = solve(i+1,a,ans);
    return x+y;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
vi a(3);
a[0] = 1;
a[1] = 2;
a[2] = 3;

vi ans;
while(t--)
{
cout << solve(0,a,ans) << endl;
}
return 0;
}