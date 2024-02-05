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
// #define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()

void solve()
{
    int n; cin >> n;
    vi a(n), b(n);vector<pair<int,int> > ans;
    forall(i,n,1) cin >> a[i];
    forall(i,n,1) cin >> b[i];
    int i = 0;
    while(i < n)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j] || (a[i] == a[j] && b[i] > b[j]))
            {
                ans.push_back(make_pair(i,j));
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
        i++;
    }
    forall(i,n-1,1)
    {
        if(b[i] > b[i+1])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
    {
        cout <<  ans[i].second + 1  << ' ' << ans[i].first + 1<< endl;
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