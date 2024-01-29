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
    int n ,k;
    cin >> n >> k;
    cout << flush;
    if (k == 0) 
    {
        cout << 0 << endl;
        return;
    }
    int a1 = n/k;
    set<int>st;
    for(int i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            st.insert(i);
            st.insert(n/i);
        }
    }
    auto m = st.lower_bound(a1);
    if(*m > a1)
    {
        m--;
    }
    cout << *m << endl;
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