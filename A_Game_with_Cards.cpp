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
    cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    cin >> m;
    vi b(m);
    forall(i,m,1) cin >> b[i];
    int max_a = *max_element(a.begin(),a.end());
    int max_b = *max_element(b.begin(),b.end());
    if(max_a == max_b)
    {
        cout << "Alice" << endl;
        cout << "Bob" << endl;
        return;
    }
    if(max_a < max_b)
    {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
        return;
    }
    if(max_a > max_b)
    {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
        return;
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