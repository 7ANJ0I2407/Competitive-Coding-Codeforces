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
    int n;
    cin >> n;
    int a = 1, b= 1, c = 1;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            a = i;
            n /= i;
            break;
        }
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0 && i != a)
        {
            b = i;
            n /= i;
            break;
        }
    }
    c = n;
    if(a == 1 || b == 1 || n == 1 || n == a || n == b)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << a << " " << b << " " << c << endl;

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