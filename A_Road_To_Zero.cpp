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
    int x,y,a,b,ans = 0;
    cin >> x >> y >>a >> b;
    // if(a > b) swap(a,b);
    // if(x > y) swap(x,y);
    if(b > 2*a) cout << a*(x+y) << endl;
    else 
    {
        cout << b*min(x,y) + (max(x,y)-min(x,y))*a << endl;
    }
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