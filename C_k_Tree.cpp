#include <iostream>
#include <vector>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

int32_t main() {
    int n, k, d;
    cin >> n >> k >> d;

    vector<vector<int> > dp(n + 1, vector<int>(2, 0)); // dp[i][j] = number of ways to reach sum i with (j == 1) or without (j == 0) using a large edge

    // Base case: one way to reach sum 0 with no large edges
    dp[0][0] = 1;

    // Fill DP table
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= k; w++) {
            if (i - w >= 0) {
                // Transition for dp[i][0]: add edge w if w < d
                if (w < d) {
                    dp[i][0] = (dp[i][0] + dp[i - w][0]) % MOD;
                }
                // Transition for dp[i][1]: add edge w
                if (w >= d) {
                    dp[i][1] = (dp[i][1] + dp[i - w][0] + dp[i - w][1]) % MOD;
                } else {
                    dp[i][1] = (dp[i][1] + dp[i - w][1]) % MOD;
                }
            }
        }
    }

    cout << dp[n][1] << endl;
    return 0;
}
