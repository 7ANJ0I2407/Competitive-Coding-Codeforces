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
// #define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()



void solve()
{
    string s;
    cin >> s;
    vector<pair<int,int> > mp;
    int opening = 0, closing = 0;
    for(int i = 0, d = 0 ;i < s.size(); i++)
    {
        mp.push_back({d, -i});
        d+= (s[i] == '(' ? 1 : -1);
    }
    sort(begin(mp), end(mp));
    for(auto m : mp)
    {
        // cout << m.first << ' ' << m.second;
        cout << s[-m.second];
    }
    cout << endl;
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