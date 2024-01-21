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
#define takeinput(i,n,x) for(int i = 0; i < n; i+=x)
typedef vector<ll> vi;
#define all(x) x.begin(), x.end()

int mod_mul(int a,int b,int m)
{
    return ((a%m) * (b%m))%m;
    // takeinput(i,10,1)
}

int expo_mul(int a,int b,int m)
{
    if(b ==0) return 1;
    int res = expo_mul(a,b/2,m);
    res = mod_mul(res,res,m);
    if(b%2 == 1)
    res = mod_mul(res,a,m);
    return res;
}

int mod_inv(int a, int m)
{
    return expo_mul(a,m-2,m);
}
int mod_div(int a,int b, int m)
{
    return mod_mul(a,mod_inv(b,m),m);
}

void solve()
{
    // cout << mod_div(12,4,7) << endl;
    int ele = 18;
    int sq_el = floor(sqrt(ele));
    cout << ele - sq_el*sq_el << endl;
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