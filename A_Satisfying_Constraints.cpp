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
    vector<pair<int,int> > p(n);
    forall(i,n,1)
    {
        cin >> p[i].first >> p[i].second;
    }
    int mini = INT_MIN, maxi = INT_MAX, rem = 0;
    for(auto it : p)
    {
        if(it.first == 1)
        {
            mini = max(mini, it.second);
            // cout << "find mini " << mini << endl;
        }
        
        if(it.first == 2)
        {
            maxi = min(maxi,it.second);
            // cout << "find maxi " << maxi << endl;
        }
    }
    for(auto it : p)
    {
        if(it.first == 3)
        {
            if(it.second >= mini && it.second <= maxi) rem++;
        }
    }
    // cout <<"rem find " << rem << endl;
    if(mini > maxi)
    {
        cout << 0 << endl;
        return;
    }
    cout << abs(maxi - mini - rem + 1) << endl;

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