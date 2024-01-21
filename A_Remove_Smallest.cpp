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
    int n;
    cin >> n;
    vi a;
    for(int i =0;i<n;i++)
    {
        int x;
        cin>> x;
        a.pb(x);
    }
    bool b = true;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++)
    {
        if(a[i-1] == a[i] || a[i-1]+1 == a[i])
        {
        }
        else
        {
            b = false;
            break;
        }
    }
    if(b)
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