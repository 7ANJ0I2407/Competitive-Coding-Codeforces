#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
//#include <bits/stdc++.h>
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

void solve()
{
    int n , k;
    cin >> n >> k;
    vector<int> a(n + 1, -1);
    for(int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u] = v;
    }
    int idx = 0, len = 0;
    cin >> idx;
    while(a[idx] != -1)
    {
        len++;
        idx = a[idx];
    }
    if(len % 2  || (n - len - 1) % 2)
    {
        cout << "Ron" << endl;
        return;
    }
    else cout << "Hermione" << endl;
    return;
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