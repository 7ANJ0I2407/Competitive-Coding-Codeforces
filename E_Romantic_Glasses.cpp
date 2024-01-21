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
    int n;
    cin >> n;
    vi a(n);
    int sum =0;
    map<ll,ll>m;
    m[0] = 1;
    forall(i,n,1) cin >> a[i];
    forall(i,n,1)
    {
        a[i] *= ((i%2) ? -1:1);
        sum += a[i];
        if(m[sum])  // checking if two prefix sum are equal or not... if equal then there exist a sub array
        // whose sum is zero.
        {
            cout << "YES" << endl;
            return;
        }
        m[sum]++; // after encountering a sum mapping it
    }
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