#include<iostream>
#include<vector>
using namespace std;

#define int long long
typedef vector<int> vi;
const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    vi coins(n);
    for(auto &x : coins) cin >> x;
    
    vector<vector<int> > dp(n+10, vector<int>(k+10, 0)); // dp[i][j] = number of ways to make sum j using coins[i...n-1]

    // There is exactly one way to make the sum 0 (by using no coins)
    for(int j = 0; j < n; j++) {
        dp[j][0] = 1; // Base case: dp[i][0] = 1 for all i
    }
    
    for(int i = n - 1; i >= 0; i--) { // Iterate over all coins
        for(int j = 1; j <= k; j++) { // Iterate over all sums
            int pick = dp[i+1][j]; // Exclude the current coin
            int notPick = 0;
            if(j >= coins[i]) {
                notPick = dp[i][j - coins[i]]; // Include the current coin
            }
            dp[i][j] = (notPick % MOD + pick % MOD + MOD) % MOD;
        }
    }
    
    cout << dp[0][k] << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
