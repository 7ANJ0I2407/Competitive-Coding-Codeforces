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
    int n , x;
    cin >> n >> x;
    vi a(n+1);
    if(n % x)
    {
        cout << -1 << endl;
        return;
    }
    forall(i,n+1,1) a[i] = i;
    a[1] = x;
    a[n] = 1;
    while(x < n)
    {
        for(int i = 2 * x; i <= n; i+=x)
        {
            if(n % i == 0)
            {
                a[x] = i;
                x = i;
                break;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
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