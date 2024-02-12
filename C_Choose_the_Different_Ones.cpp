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
    int n, m,k;
    cin >> n >> m >> k;
    vi a(n), b(m);
    forall(i,n,1) cin >> a[i];
    forall(i,m,1) cin >> b[i];
    sort(all(a));
    sort(all(b));
    
    set<int> aa, bb, c;
    forall(i,n,1)
    {
        if(a[i] <= k) aa.insert(a[i]);
    }
    forall(i,m,1)
    {
        if(b[i] <= k) bb.insert(b[i]);
    }
    for(auto it : aa)
    {
        if(bb.find(it) != bb.end())
        {
            c.insert(it);
            bb.erase(it);
        }
    }

    for(auto it : c) 
    {
       if(aa.find(it) != aa.end())
        {
            aa.erase(it);
        }
    }
    

    int ans = aa.size() + bb.size()+ c.size();
    if(ans < k) 
    {
        cout << "NO" << endl;
        return;
    }
    if(aa.size()+c.size() >= (k/2) && bb.size()+c.size() >= (k/2))
    {
        cout << "YES" << endl;
        return;
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