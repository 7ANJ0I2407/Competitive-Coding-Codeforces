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
    int odd = 0,even = 0;
    for(int i = 0;i < 2*n;i++)
    {
        int x;
        cin >> x;
        if(x%2 == 0)
        even++;
        else
        odd++;
    }
    if(even == odd)
    cout << "Yes" << endl;
    else
    cout << "No" << endl;
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