#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n; 
    string s;
    cin >> n >> s;

    map<char, int> m;
    for(int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    priority_queue<pair<int, char>> pq;
    for(auto i : m)
    {
        pq.push({i.second, i.first});
    }
    
    string result(n, ' ');
    int idx = 0;

    while(!pq.empty())
    {
        auto curr = pq.top();
        pq.pop();

        for(int i = 0; i < curr.first; i++)
        {
            if(idx >= n) idx = 1;
            result[idx] = curr.second;
            idx += 2;
        }
    }

    cout << result << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0); 
    cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
