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
    int a,b,c;
    cin >> a >> b >> c;
    // find total range
    int range = abs(a-b)*2;
    if(c > range || a > range || b > range)
    {
        cout << -1 << endl;
        return;
    }
    if(c > range/2) cout << c - range/2 << endl;
    else cout << c + range/2 << endl;
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