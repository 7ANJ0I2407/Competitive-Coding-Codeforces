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

const int maxi = 200008;
int a[maxi], pref[maxi];

int count(int x)
{
    int cnt = 0;
    while(x)
    {
        cnt++;
        x /= 3;
    }
    return cnt;
}

void solve()
{
    int l, r;
    cin >> l >> r;
    cout << pref[r] - pref[l - 1] + a[l] << endl;

}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
pref[0] = 0;
for(int i = 1; i < maxi - 1; i++)
{
    a[i] = count(i);
    pref[i] = pref[i - 1] + a[i];
}

while(t--)
{
solve();
}

return 0;
}