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
    string t;
    cin >> n >> t;
    int x = 0, y = 0;
    for (auto i : t)
    {
        if (i == 'N')
            y++;
        else if (i == 'S')
            y--;
        else if (i == 'W')
            x--;
        else
            x++;
    }
    if (abs(x) % 2 == 1 || abs(y) % 2 == 1)
        cout << "NO" << endl;
    else if (n == 2 && x == 0 && y == 0)
        cout << "NO" << endl;
    else
    {
        int n = 0, s = 0, w = 1, e = 1;
        char m[2] = {'R', 'H'};
        string ans = "";
        for (auto c : t)
        {
            if (c == 'N')
                ans += m[n], n = 1 - n;
            else if (c == 'S')
                ans += m[s], s = 1 - s;
            else if (c == 'W')
                ans += m[w], w = 1 - w;
            else
                ans += m[e], e = 1 - e;
        }
        cout << ans << '\n';
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