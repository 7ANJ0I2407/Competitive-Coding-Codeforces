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

int ans_arr[200007];

int result(int x)
{
    int res = 0;
    while(x)
    {
        res+=(x % 10);
        x /= 10;
    }
    return res;
}

void solve()
{
    int n;
    cin >> n;
    cout << ans_arr[n] << endl;
}

signed main()
{
    ans_arr[0] = 0;
    for(int i = 1; i < 200007; i++)
    {
        ans_arr[i] += ans_arr[i-1] + result(i);
    }
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