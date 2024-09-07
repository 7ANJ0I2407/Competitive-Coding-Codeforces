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
    int A = 0, B = 0, cntA = 0, cntB = 0;
    while(n--)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;
        for(auto c : s)
        {
            if(x == 1)
            {
                if(c != 'a') A = 1;
                else cntA += y;
            }
            else {
                if(c != 'a') B = 1;
                else cntB += y;
            }
        }
        if(B || (!A && cntA < cntB)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
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