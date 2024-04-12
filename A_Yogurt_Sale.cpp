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
    int a, b, c;
    cin >> a >> b >> c;
    int x, y;
    if(a % 2 == 0)
    {
        cout << ((b * a) < (c * (a/2)) ? (b * a) : (c * (a/2))) << endl;
        return;
    }
    else
    {
        int x = a * b;
        int y = (c * (a/2)) + b;
        if(x > y) cout << y << endl;
        else cout << x << endl;
    }
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