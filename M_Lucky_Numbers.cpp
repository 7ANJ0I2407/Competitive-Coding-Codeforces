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
    int n,m;
    cin >> n >> m;
    bool v = false;
    for(int i=n; i <=m; i++)
    {
        int a = i;
        bool flag = false;
        while(a > 0)
        {
            int x = a%10;
            if(x != 7 && x != 4)
            flag = true;
            a /= 10;
        }
        if(!flag) 
        {
            cout << i << ' ';
            v = true;
        }
    }
    if(!v) cout << -1 << endl;
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