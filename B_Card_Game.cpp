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
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    int suneetWins = 0;

    vector<pair<int, int> > c1 = {{a1, a2}, {a2, a1}};
    vector<pair<int, int> > c2 = {{b1, b2}, {b2, b1}};
    
    for (auto &s : c1) {
        for (auto &l : c2) {
            int sWins = 0, lWins = 0;
            if (s.first > l.first) sWins++;
            else if (s.first < l.first) lWins++;
            if (s.second > l.second) sWins++;
            else if (s.second < l.second) lWins++;
            if (sWins > lWins) suneetWins++;
        }
    }

    cout << suneetWins << endl;
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