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
    vi a(n);
    int sum = 0, cnt_1 = 0;
    forall(i,n,1) cin >> a[i];
    for(auto m : a)
    {
        sum += m;
        if( m == 1) cnt_1++;
    }
    if(sum > cnt_1 + n && n > 1)
    {
        cout << "YES" << endl;
        return;
    }
    else cout << "NO" << endl;
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