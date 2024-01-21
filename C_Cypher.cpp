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
    int n;
    cin >> n; // 3
    vi a(n);
    forall(i,n,1) cin >> a[i]; // input of final sequence..
    for(int i=0;i<n;i++) // 3
    {
        int x;
        cin >> x;
        int uP =0,dN =0;
        for(int j=0;j<x;j++)
        {
            char x;
            cin >> x;
            if(x =='U') uP++;
            else dN++;
        }
        int op = dN-uP; // count the no of ooperations
        cout << (100+(a[i] + op)%10)%10 << " ";  // do it with final sequence
    }
cout << endl;
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