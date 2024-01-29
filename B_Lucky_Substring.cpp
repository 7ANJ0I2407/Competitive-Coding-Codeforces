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
    int count_4 = 0, count_7 = 0;
    forall(i,s.size(),1)
    {
        if(s[i] == '4') count_4++;
        else if(s[i] == '7') count_7++;
    }
    if(count_4 || count_7)
    count_4 >= count_7 ? cout << 4 : cout << 7 ;
    else cout << -1;
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