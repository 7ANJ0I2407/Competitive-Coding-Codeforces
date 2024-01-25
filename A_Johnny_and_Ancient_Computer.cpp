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
    int a , b, cnt = 0;
    cin >> a >> b;
    if(a > b) swap(a,b);
    while(a < b)
    {
        if(a * 8 <= b) a *= 8;
        else if(a * 4 <= b) a *= 4;
        else a *= 2;
        cnt++;
    }
    if(a == b) cout << cnt << endl;
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