#include<iostream>
#include <bits/stdc++.h>
#include<set>
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

bool comp(pair<int, int> a, pair<int, int> b)
{
    if(a.second > b.second) return true;
    else if(a.second == b.second) return a.first > b.first;
    return false;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    forall(i, n, 1) 
    {
        int x;
        cin >> x;
        a[i] = {x + i, x};
    }
    sort(all(a));
    set<int> st;
    st.insert(n);
    for(int i = 0; i < n; i++)
    {
        int curr = a[i].first;
        int increase = a[i].first - a[i].second;
        if(st.find(curr) == st.end())  continue;
        st.insert(curr + increase);
        
    }
    cout << *st.rbegin() << endl;
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