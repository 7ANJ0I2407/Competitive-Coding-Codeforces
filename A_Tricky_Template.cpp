#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
// #include<bits/stdc++.h>
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
    string a,b,c;
    cin >> a >> b >> c;
    bool flag = false;
    forall(i,n,1)
    {
        if(a.substr(i,1) != c.substr(i,1) && b.substr(i,1) != c.substr(i,1))
        {
            flag = true;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
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