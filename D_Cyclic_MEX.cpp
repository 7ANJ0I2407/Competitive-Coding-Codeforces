#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

void solve()
{
    int n;
    cin >> n;
    vi a(n+1), p;
    deque<int> dq;
    for(int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        dq.pb(a[i]);
    }
    while(dq.front() != 0)
    {
        int t = dq.front();
        dq.pop_front();
        dq.push_back(t); 
    }
    forall(i, n, 1)
    {
        int x = dq.front();
        p.pb(x);
        dq.pop_front();
    }
    //shifted the array properly
    stack<int> st;
    vi idx(n), val(n, n);
    st.push(0);
    for(int i = 1; i < n; i++)
    {
        while(!st.empty() && p[st.top()] > p[i]) st.pop();
        idx[i] = st.top(); // got the largest small idx smaller that the curr i;
        st.push(i); // push the current one
    }
    for(int i = 1; i < n; i++)
    {
        cout << idx[i] << ' ' << p[i] << endl;
        val[i] = (val[idx[i]]) + (i - idx[i]) * p[i];
    }
    cout << *max_element(all(val)) << endl;
    // for(auto m : val) cout << m << ' ';
    // cout << endl;
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