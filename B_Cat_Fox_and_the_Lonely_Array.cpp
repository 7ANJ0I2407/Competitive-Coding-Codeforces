#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// bool checkSlidingWindowOr(const vector<int>& arr, int k) {
//     int n = arr.size();
//     int currentOr = 0;
    
//     for (int i = 0; i < k; ++i) {
//         currentOr |= arr[i];
//     }
//     int initialOr = currentOr;
    
//     for (int i = k; i < n; ++i) {
//         currentOr = (currentOr) & ~arr[i - k]; // Efficiently update the OR
//         currentOr |= arr[i];
//         if (currentOr != initialOr) {
//             return false;
//         }
//     }
//     return true;
// }

bool checkSlidingWindowOr(const vector<int>& arr, int k) {
    int n = arr.size();
    int currentOr = 0;

    // Calculate the OR for the first window
    for (int i = 0; i < k; ++i) {
        currentOr |= arr[i];
    }
    int initialOr = currentOr;

    // Slide the window across the array and calculate the OR
    for (int i = k; i < n; ++i) {
        // currentOr |= arr[i];
        currentOr &= ~arr[i - k];
        currentOr |= arr[i];
         // Correctly update the OR
        if (currentOr != initialOr) {
            return false;
        }
    }
    return true;
}


void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int loneliness = n; // Start with the maximum possible value
    
    for (int k = 1; k <= n; ++k) {
        if (checkSlidingWindowOr(a, k)) {
            loneliness = k;
            break;
        }
    }
    
    cout << loneliness << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
