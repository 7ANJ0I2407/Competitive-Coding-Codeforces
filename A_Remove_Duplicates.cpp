#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<stack>
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
    stack<int> st;
    set<int> set;
    int n;
    cin >> n;
    vi a(n);
    forall(i,n,1) cin >> a[i];
    for(int i = n-1;i>=0;i--)
    {
        if(set.find(a[i]) == set.end()) // checks for ith num if not present the push it into stack from n-1 end
        {
            set.insert(a[i]);
            st.push(a[i]);
        }
    }
    cout << set.size() << endl;
    while(!st.empty())
    {
        cout << st.top() << ' ';
        st.pop();
    }
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