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
    string s;
    cin >> s;
    int size = s.size();
    if(size < 7)
    {
        cout << "NO" << endl;
        return;
    }
    int cnt , temp;
    forall(i,s.size(),1)
    {
        if(s.substr(i,7) == "0000000" || s.substr(i,7) == "1111111")
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

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