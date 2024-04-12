#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, w;
    cin >> n >> w;

    int b = 0, minB = 0, maxB = 0;
    for (int i = 0; i < n; ++i) {
        int ai;
        cin >> ai;
        b += ai;
        minB = min(minB, b);
        maxB = max(maxB, b);
    }

    if (maxB > w) {
        cout << 0 << endl;
        return 0;
    }

    int lf, rg;
    if (minB < 0) {
        lf = -minB;
    } else {
        lf = 0;
    }

    if (maxB <= 0) {
        rg = w;
    } else {
        rg = w - maxB;
    }

    if (lf > rg) {
        cout << 0 << endl;
    } else {
        cout << rg - lf + 1 << endl;
    }

    return 0;
}
