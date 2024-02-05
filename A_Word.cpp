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
    string s; cin >> s;
    int upper = 0, lower = 0;
    for(auto it : s)
    {
        if(it >= 97) lower++;
        else upper++;
    }
    if(upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), :: toupper);
        cout << s << endl;
    }
    else 
    {
        transform(s.begin(), s.end(), s.begin(), :: tolower);
        cout << s << endl;
    }
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