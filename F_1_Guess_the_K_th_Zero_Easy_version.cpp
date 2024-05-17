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

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    int n;
    cin >> n >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int l = 1, h = n;
        while (l <= h)
        {
            int m = (l + h) / 2;
            int len = m - l + 1;
            cout << '?' << " " << l << " " << m << endl;
            int p;
            cin >> p;
            int zero = len - p;
            if(zero >= x)
            {
                if(l == h && x == 1)
                {
                    cout << '!' << " " << l << endl;
                    break;
                }
                h = m;
            }
            else 
            {
                x -= zero;
                l = m + 1;
            }
        }
    }

    return 0;
}