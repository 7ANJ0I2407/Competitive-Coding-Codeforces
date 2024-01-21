#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include<algorithm>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define all(x) x.begin(), x.end()

int gcd(int a,int b) { if(b == 0) return a; return gcd(b,a%b); }

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin >> x;
        ans =gcd(ans,abs(x-i));
    }
    cout << ans << endl;

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