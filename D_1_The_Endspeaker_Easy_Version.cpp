#include<iostream>
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define pp pop_back
#define ll long long
#define int long long
typedef vector<ll> vi;

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i]; // Fix to 0-based indexing
    vi b(m);
    for(int i = 0; i < m; i++) cin >> b[i]; // Fix to 0-based indexing

    // Initialize prefix sums
    vi pref(n + 1, 0);
    pref[0] = a[0];
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + a[i+1]; // Adjust to 0-based indexing
    }

    // Initialize DP table
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 1e18)); 
    dp[1][0] = 0; // Fix initialization; 0th index for base case

    // Binary Search Lambda Function
    auto BS = [&] (int start, int sum) -> int {
        int l = start + 1; // Start searching after `start`
        int r = n + 1; // Use n + 1 since we want to find the first index where the condition fails
        while(l < r) {
            int mid = (l + r) / 2;
            if(pref[mid] - pref[start] <= sum) l = mid + 1;
            else r = mid;
        }
        return l; // Return the index
    };

    // Fill the DP array
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]); // Ensure bounds are correct

            // Find valid index using binary search
            int idx = BS(i, b[j]); 
            if (idx <= n) // Ensure the index is within bounds
                dp[idx][j + 1] = min(dp[idx][j + 1], dp[i][j] + (m - j - 1));
        }
    }

    // Get the answer
    int ans = 1e18;
    for(int i = 0; i <= n; i++) ans = min(ans, dp[i][m]);
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr); // Use nullptr instead of NULL for better type safety
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
