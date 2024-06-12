#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <bits/stdc++.h>
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
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    unordered_map<string, int> tripleCount;

    auto createKey = [](int x, int y, int z)
    {
        return to_string(x) + "," + to_string(y) + "," + to_string(z);
    };

    for (int i = 0; i <= n - 3; ++i)
    {
        string key = createKey(arr[i], arr[i + 1], arr[i + 2]);
        tripleCount[key]++;
    }

    long long beautifulPairs = 0;

    for (const auto &entry : tripleCount)
    {
        string key = entry.first;
        int count = entry.second;

        int x1, y1, z1;
        sscanf(key.c_str(), "%d,%d,%d", &x1, &y1, &z1);

        for (const auto &otherEntry : tripleCount)
        {
            if (otherEntry.first == key)
                continue;

            int x2, y2, z2;
            sscanf(otherEntry.first.c_str(), "%d,%d,%d", &x2, &y2, &z2);

            if ((x1 != x2 && y1 == y2 && z1 == z2) ||
                (x1 == x2 && y1 != y2 && z1 == z2) ||
                (x1 == x2 && y1 == y2 && z1 != z2))
            {
                beautifulPairs += count * otherEntry.second;
            }
        }
    }
    cout << beautifulPairs / 2 << endl;
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