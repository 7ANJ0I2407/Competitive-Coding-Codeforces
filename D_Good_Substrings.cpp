#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <algorithm>
using namespace std;

#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
using PII = pair<int, int>;
typedef vector<ll> vi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()

#pragma GCC optimize("O3")
#pragma GCC target("avx2")
int const MOD = 1e9 + 7;

void solve()
{
    string s, r;
    int t;
    cin >> s >> r >> t;
    int n = s.size();
    
    set<pair<int, int> > good;
    for (int i = 0; i < n; i++)
    {
        int m1 = 1e9 + 7, m2 = 1e9 + 11;
        int p[2] = {29, 157};
        int cnt = 0;
        int h1 = 0, h2 = 0;

        for (int j = i; j < n; j++)
        {
            // check that if there are t good substrings in the range [i, j]
            if (r[s[j] - 'a'] == '0') ++cnt;
            if (cnt > t) break;
            h1 = ((h1) % m1 + (s[j] - 'a' + 1) * p[0]) % m1;
            h2 = ((h2) % m2 + (s[j] - 'a' + 1) * p[1]) % m2;
            p[0] = (p[0] * 31) % m1;
            p[1] = (p[1] * 37) % m2;
            if(good.find({h1, h2}) == good.end())
                good.insert({h1, h2});
        }
    }
    cout << good.size() << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0); 
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
