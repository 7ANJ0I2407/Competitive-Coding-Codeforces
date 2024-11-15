// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
        pref[i + 1] = (pref[i] + arr[i]);

    int sum = [](int i, int j) -> int
    {
        return pref[j + 1] - pref[i];
    };
    vector<vector<int> > dp(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++)
        dp[i][i] = arr[i];
    for (int len = 2; len <= n; len++)
    {
        for (int i = 0; i + len <= n; i++)
        {
            int j = i + len - 1;
            dp[i][j] = max((arr[i]) + (sum(i + 1, j) - dp[i + 1][j]),
                           (arr[j]) + (sum(i, j - 1) - dp[i][j - 1]));
        }
    }
    cout << dp[0][n - 1] << endl;
    return 0;
}