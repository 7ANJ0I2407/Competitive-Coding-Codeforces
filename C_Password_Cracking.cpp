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

int query(string& s)
{
    cout << "? " << s << endl;
    int x;
    cin >> x;
    return x;
}

void solve()
{
    int n;
    cin >> n;
    string ans = "";
    while(ans.size() < n)
    {
        string n1 = ans + '0';
        string n2 = ans + '1';
        if(query(n1))
        {
            ans = n1;
        }
        else if(query(n2))
        {
            ans = n2;
        }
        else
        {
            break;
        }
    }
    while(ans.size() < n)
    {
        string n1 = '0' + ans;
        string n2 = '1' + ans;
        if(query(n1))
        {
            ans = n1;
        }
        else
        {
            ans = n2;
        }
    }
    cout << "! " << ans << endl;
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