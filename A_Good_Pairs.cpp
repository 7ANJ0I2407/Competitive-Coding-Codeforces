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
int i1=0,i2=0;
void solve()
{
    int min = INT16_MIN, max = INT16_MAX;
    int n; cin >> n;
    vi a(n);
    forall(i,n,1)
    {
        cin >> a[i];
    }
    forall(i,n,1)
    {
        if(a[i] < max) 
        {
            max = a[i];
            i1 = i;
        }
        if(a[i] > min) 
        {
            min = a[i];
            i2 = i;
        }
    }
    cout << i1+1 << ' '<< i2+1 << endl;
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