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
    int size = s.size();
    if((s[size-1] - '0')%2 == 0) 
    {
        cout << 0 << endl;
        return;
    }
    if((s[0] - '0')%2 == 0)
    {
        cout << 1 << endl;
        return;
    }
    int count = 0;
    for(int i = 0; i < size; i++)
    {

        if((s[i] - '0') % 2 == 0)
        count++;
    }
    if(count > 0) cout << 2 << endl;
    else cout << -1 << endl;

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