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

set<ll>all;

ll n,l,r;
vector<ll> v;
void build_array(ll x){
    if(x>1e10)
        return ;
    v.push_back(x);
    build_array(x*10+7);
    build_array(x*10+4);
}

void solve()
{
    build_array(4);
    build_array(7);
    for(auto m : v)
    cout << m << endl;
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