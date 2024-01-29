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
    int n, k;
    cin >> n >> k;
    int count = 1, maxi = 1;
    vi a(n);
    forall(i,n,1)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 1; i < n; i++)
    {
        if(a[i] - a[i - 1] > k) count = 1;
        else count++;
        maxi = max(count,maxi);
    }
    cout << n - maxi << endl;
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