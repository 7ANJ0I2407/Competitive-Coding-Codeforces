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
    int n,b;
    cin >> n >> b;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    int pro = 1;
    for(auto m : a)
    pro *= m;
    if(2023%pro) cout << "NO" << endl;
    if(2023 % pro == 0)
    {
        cout << "YES" << endl;
        cout << 2023/pro << ' ';
        for(int i=0;i<b-1;i++)
        {
        cout << 1 << " ";
        }
        cout << endl;
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