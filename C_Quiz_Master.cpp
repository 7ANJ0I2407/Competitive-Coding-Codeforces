#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
using namespace std;

const int MAX_A = 100000;

vector<vector<int>> calculate_factors(int max_val) {
    vector<vector<int>> factors(max_val + 1);
    for (int i = 1; i <= max_val; ++i) {
        for (int j = i; j <= max_val; j += i) {
            factors[j].push_back(i);
        }
    }
    return factors;
}

int main() {
    int t;
    cin >> t;

    // Pre-calculate factors for all numbers up to MAX_A
    vector<vector<int>> factors = calculate_factors(MAX_A);
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        vector<int> topic_count(m + 1, 0);
        int covered_topics = 0;
        int left = 0, min_diff = INT_MAX;
        
        for (int right = 0; right < n; ++right) {
            // Add the current student to the window and mark their proficient topics
            for (int topic : factors[a[right]]) {
                if (topic <= m) {
                    if (topic_count[topic] == 0) {
                        ++covered_topics;
                    }
                    ++topic_count[topic];
                }
            }
            
            // Shrink the window from the left
            while (covered_topics == m) {
                min_diff = min(min_diff, a[right] - a[left]);
                
                // Try to reduce the window size
                for (int topic : factors[a[left]]) {
                    if (topic <= m) {
                        --topic_count[topic];
                        if (topic_count[topic] == 0) {
                            --covered_topics;
                        }
                    }
                }
                ++left;
            }
        }
        
        if (min_diff == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << min_diff << endl;
        }
    }
    
    return 0;
}
