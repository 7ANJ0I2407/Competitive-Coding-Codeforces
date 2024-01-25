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
    int lvl;
    cin >> lvl;
    // map<int,int> mp;
    set<int> st;
    int p;
    for(int i=0;i<2;i++)
    {
        cin >> p;
        while(p--)
        {
            int x;cin >> x;
            st.insert(x);
        }
    }
    int res = st.size();
    // cout << res << endl;
    if(res >= lvl) cout << "I become the guy." << endl;
    else cout << "Oh, my keyboard!" << endl;
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