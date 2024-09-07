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
    string str;
    cin >> str;
    int n = str.size();
    int r, p, s;
    r = p = s = 0;
    for(auto c : str)
    {
        if(c == 'R') r++;
        else if(c == 'P') p++;
        else s++;
    }
    if(r >= p && r >= s)
    {
        forall(i, n, 1) cout << 'P';
    }
    else if(p >= r && p >= s)
    {
        forall(i, n, 1) cout << 'S';
    }
    else
    {
        forall(i, n, 1) cout << 'R';
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