#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

// Function to calculate the sum of digits of a number
int digit_sum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to count the valid integers within the given range
int count_valid_numbers(int l, int r, int k) {
    // Precompute valid digits for each digit from 0 to 9 when multiplied by k
    vector<vector<int>> valid_digits(10);
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j <= 9 / k; ++j) {
            if (j * k <= 9) {
                valid_digits[i].push_back(j * k);
            }
        }
    }

    int count = 0;
    for (int num = l; num < r; ++num) {
        string num_str = to_string(num);
        vector<int> num_digits;
        for (char c : num_str) {
            num_digits.push_back(c - '0');
        }
        sort(num_digits.begin(), num_digits.end());

        bool valid = true;
        for (int digit : num_digits) {
            if (find(valid_digits[digit].begin(), valid_digits[digit].end(), digit) == valid_digits[digit].end()) {
                valid = false;
                break;
            }
        }

        if (valid) {
            count = (count + 1) % MOD;
        }
    }

    return count;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int l, r, k;
        cin >> l >> r >> k;
        int result = count_valid_numbers(l, r, k);
        cout << result << endl;
    }

    return 0;
}
