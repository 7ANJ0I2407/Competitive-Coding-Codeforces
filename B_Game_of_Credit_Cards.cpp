#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
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
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans1 = 0, ans2 = 0;;
    multiset<int> st, st2;
    forall(i, n, 1) st.insert(b[i] - '0');
    
    st2 = st;
    // for lower_bound
    forall(i, n, 1)
    {
        int x = a[i] - '0';
        auto it = st.lower_bound(x);
        if(it == st.end()) 
        {
            ans1++;
            st.erase(st.begin());
        }
        else {
            st.erase(it);
        }
    }
    cout << ans1 << endl;
    // for(auto it : st2) cout << it << ' ';
    // cout << endl;
    forall(i, n, 1)
    {
        int x = a[i] - '0';
        auto it = st2.upper_bound(x);
        if(it == st2.end()) 
        {
            st2.erase(st2.begin());
        }
        else {
            ans2++;
            st2.erase(it);
        }
    }
    cout << ans2 << endl;


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