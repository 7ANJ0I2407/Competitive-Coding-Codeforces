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
#define all(x) x.begin(), x.end()

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vi dist(k+1,0), time(k+1,0);
    for(int i = 1; i <=k ; i++) cin >> dist[i];
    for(int i = 1; i <=k ; i++) cin >> time[i];

    while(q--)
    {
        int x;
        cin >> x;
        int idx = upper_bound(dist.begin(), dist.end(), x) - dist.begin();
        idx--;
        if(dist[idx] == x) cout << time[idx] << ' ';
        else
        {
            int extraTime = time[idx] + ((x - dist[idx]) * (time[idx + 1] - time[idx])) / (dist[idx + 1] - dist[idx]);
            cout << extraTime << ' ';
        }
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