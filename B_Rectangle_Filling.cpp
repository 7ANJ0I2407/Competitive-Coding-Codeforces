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
    int n, m;
    cin >> n >> m;
    char arr[n + 1][m + 1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < m; j++)
    //         cout << arr[i][j];
    //         cout << endl;
    // }
    // cout <<endl;

    string ans = "YES";
    if (arr[0][0] != arr[n - 1][m - 1])
    {
        bool p = true;

        for (int i = 0; i < m - 1; i++)
        {
            if (arr[0][i] != arr[0][i + 1] || arr[n - 1][i] != arr[n - 1][i + 1])
            {
                p = false;
                break;
            }
                
        }
        if (p)
            ans = "NO";
        
        p = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i][0] != arr[i + 1][0] || arr[i][m - 1] != arr[i + 1][m - 1])
            {
                p = false;
                break;
            }
        }
        if (p)
            ans = "NO";
    }
        cout << ans << endl;

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