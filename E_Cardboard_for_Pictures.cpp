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
    int n,k; cin >> n >> k;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    int low = 1, high = 1e10;
    while(low <= high)
    {
        int mid = low + (high - low)/2;
        int sum = 0;
        forall(i,n,1)
        {
            sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
            if(sum >= k) break;
        }
        if(sum == k) 
        {
            cout << mid << endl;
            return;
        }
        else if(sum > k) high = mid - 1;
        else low = mid + 1;
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