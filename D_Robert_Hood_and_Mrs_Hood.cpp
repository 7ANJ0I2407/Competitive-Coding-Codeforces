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
    int n, d, k;
    cin >> n >> d >> k;
    vector<int> a(n+2);
    while(k--)
    {
        int l, r;
        cin >> l >> r;
        l = max(1ll, l - d + 1);
        a[l]++;
        a[r+1]--;
    }
    for(int i = 1; i <= n; i++)
    {
        a[i] += a[i-1];
    }
    int st = -1, en = -1;
    int mini = INT_MIN, maxi = INT_MAX;
    for(int i = 1; i + d - 1 <= n; i++)
    {
        if(a[i] > mini)
        {
            mini = a[i];
            st = i;
        }
        if(a[i] < maxi)
        {
            maxi = a[i];
            en = i;
        }
    }
    cout << st << " "<< en << endl;
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