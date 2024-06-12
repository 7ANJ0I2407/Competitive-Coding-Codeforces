#include <iostream>
using namespace std;

int readInt() {
    int x;
    cin >> x;
    return x;
}

pair<int, int> readIntPair() {
    int first, second;
    cin >> first >> second;
    return make_pair(first, second);
}

int main() {
    int testCases = readInt();

    while (testCases--) {
        auto [a, b] = readIntPair();

        int result = 0;
        result += b / 2;

        int halfB = b / 2;

        a -= 7 * halfB;
        a = max(0, a);

        if (b % 2 == 1) {
            a -= 11;
            result++;
        }

        a = max(0, a);
        result += a / 15;
        a -= 15 * (a / 15);

        if (a > 0) {
            result++;
        }

        cout << result << endl;
    }

    return 0;
}
