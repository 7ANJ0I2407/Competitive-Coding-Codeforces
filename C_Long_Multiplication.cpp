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

void solve()
{
    string a, b;
    cin >> a >> b;
    if(a < b) swap(a,b);
    bool flag = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] == b[i]) continue;
        if(a[i] > b[i] && flag) swap(a[i], b[i]);
        if(a[i] != b[i]) flag = 1;
    }
    cout << a << endl;
    cout << b << endl;
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