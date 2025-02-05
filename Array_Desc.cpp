#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) cin >> arr[i];

    // dp[i][x] = number of ways to fill the array up to i such that arr[i] = x
    vector<vector<int> > dp(n, vector<int>(m + 1, 0));

    // Base case for arr[0]
    if (arr[0] == 0) {
        for (int j = 1; j <= m; j++) dp[0][j] = 1;
    } else {
        dp[0][arr[0]] = 1;
    }

    // Fill DP table
    for (int i = 1; i < n; i++) {
        for (int x = 1; x <= m; x++) {
            if (arr[i] == 0 || arr[i] == x) {
                dp[i][x] = dp[i-1][x];  // Same value from previous index
                if (x > 1) dp[i][x] = (dp[i][x] + dp[i-1][x-1]) % MOD;  // From x-1
                if (x < m) dp[i][x] = (dp[i][x] + dp[i-1][x+1]) % MOD;  // From x+1
            }
        }
    }

    // Calculate the result
    long long res = 0;
    for (int j = 1; j <= m; j++) {
        res = (res + dp[n-1][j]) % MOD;
    }
    cout << res << endl;
    return 0;
}
