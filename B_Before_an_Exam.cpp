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
// #define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int d, sumTime;
    cin >> d >> sumTime;
    vector<pair<int, int> > a;
    int minSum = 0, maxSum = 0;
    forall(i, d, 1)
    {
        int x, y;
        cin >> x >> y;
        a.pb(make_pair(x, y));
        minSum += x;
        maxSum += y;
    }
    if(sumTime < minSum || sumTime > maxSum)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    vector<int> ans(d);
    //take the minimum time for each day
    forall(i, d, 1)
    {
        ans[i] = a[i].first;
    }
    int sum = minSum;

    forall(i, d, 1) // if sum is less than sumTime, then add the difference to the minimum time of each day
    {
        if(sum < sumTime) // if sum is less than sumTime, then add the difference to the minimum time of each day
        {
            int diff = min(a[i].second - a[i].first, sumTime - sum);
            ans[i] += diff;
            sum += diff;
        }
    }
    forall(i, d, 1)
    {
        cout << ans[i] << ' ';
    }
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
while(t--)
{
solve();
}

return 0;
}