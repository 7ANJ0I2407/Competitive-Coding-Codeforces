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
    cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    bool flag = false;
    forall(i,n,1)
    {
        int m = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[m] > a[j]) m = j;
        }
        if(m != i)
        {
            reverse(a.begin()+i,a.begin()+m+1);
            // swap(a[i],a[m]);
            break;
        }
    }
    for(auto m : a) cout << m <<' ';
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