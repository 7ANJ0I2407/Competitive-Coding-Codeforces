#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
// #include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int, int>
typedef vector<ll> vi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            int sat = 2;
            for(int j = 0; j < i; j++)
            {
                for(int k = j + i; k < n; k+=i)
                {
                    if(s[j] != s[k]) sat--;
                }
            }
            if(sat > 0)
            {
                cout << i << endl;
                return;
            }

            sat = 2;
            for(int j = n - i; j < n; j++)
            {
                for(int k = j - i; k >= 0; k-=i)
                {
                    if(s[j] != s[k]) sat--;
                }
            }
            if(sat > 0)
            {
                cout << i << endl;
                return;
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}