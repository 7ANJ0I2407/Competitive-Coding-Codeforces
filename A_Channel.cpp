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
    int n,a,q;
    cin >> n >> a >> q;
    string s;
    cin >> s;
    int p = 0, pos = 0;
    if(a == n)
    {
        cout << "YES"<< endl;
        return;
    }
    for(auto m : s)
    {
        if(m == '+') 
        {
            p++;
            pos++;
            if(a+p == n)
            {
                cout << "YES" << endl;
                return;
            }
        }
        if(m == '-') p--;
    }
    if(a+pos < n)
    {
        cout << "NO" << endl;
        return;
    }
    else cout << "MAYBE" << endl;
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