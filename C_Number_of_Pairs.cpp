#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countPairs(const vector<int>& a, int x) {
    long long count = 0;
    int n = a.size();
    for (int i = 0; i < n; ++i) {
        int j = upper_bound(a.begin() + i + 1, a.end(), x - a[i]) - a.begin();
        count += (j - i - 1);
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long pairsR = countPairs(a, r);
        long long pairsLMinus1 = countPairs(a, l - 1);
        cout << pairsR - pairsLMinus1 << "\n";
    }
    return 0;
}
