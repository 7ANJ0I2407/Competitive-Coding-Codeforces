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
#define all(x) x.begin(), x.end()

void solve()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int max1 = max(a,b),max2 = max(c,d),max_All = max(d,max(c,max(a,b)));
    int max_All2 = INT16_MIN;
    if(max_All == a)
    max_All2 = max(b,max(c,d));
    if(max_All == b)
    max_All2 = max(a,max(c,d));
    if(max_All == c)
    max_All2 = max(b,max(a,d));
    if(max_All == d)
    max_All2 = max(b,max(c,a));
    if((max1 == max_All || max1 == max_All2) && (max2 == max_All || max2 == max_All2))
    cout << "YES" << endl;
    else 
    cout << "NO" << endl;
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