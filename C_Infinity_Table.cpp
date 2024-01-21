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
    int row_col = floor(sqrt(n));
    int sq = row_col * row_col;
    int rem = n - sq;
    if(rem  == 0)
    {
        cout << row_col << ' ' << 1 << endl;
    }
    else if (rem <= (row_col+1))
    {
        cout << rem << ' ' << (row_col+1) << endl;
    }
    else
    {
        cout << (row_col+1) << ' ' << (row_col+1) - (rem % (row_col+1)) << endl;
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