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

int lcm(int a , int b)
{
    return a*b/__algo_gcd(a,b);
}

void solve()
{
    int x; cin >> x;int ans = 0;
    for(int i = 1; i*i <= x; i++)
    {
        if(x % i == 0 && lcm(i,x/i) == x)
        {
            ans = i;
        }
    }
    cout << ans << ' ' << x/ans << endl;
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