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
    vi ans;
    while(n)
    {
        int temp = n, num = 0, product = 1;
        while(temp)
        {
            if(temp % 10) num += product;
            temp /= 10;
            product *= 10;
            cout << temp << endl;
        }
        ans.pb(num);
        n -= num;
    }
    cout << ans.size() << endl;
    for(auto x: ans) cout << x << ' ';
    cout << endl;

}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
while(t--)
{
solve();
}

return 0;
}