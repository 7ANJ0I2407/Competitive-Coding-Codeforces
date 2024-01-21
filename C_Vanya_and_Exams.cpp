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
    int n,r,avg,rez=0,sum=0;
    cin >> n >> r >> avg;
    pair a[n];
    forall(i,n,1)
    {
        cin >> a[i].second >> a[i].first;
        sum += a[i].second;
    }
    sort(a,a+n);
    int i=0;
    while(sum < avg*n)
    {
        int temp = min(avg*n-sum,r - a[i].second);
        rez += temp * a[i].first;
        sum += temp;
        i++;
    }
    cout << rez << endl;
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