#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void solveTestCase() {
    int n, m, q;
    cin >> n >> m >> q;

    vector<int> a(q);
    for (int i = 0; i < q; ++i) {
        cin >> a[i];
    }

    unordered_set<int> possiblePositions;
    possiblePositions.insert(m);

    for (int i = 0; i < q; ++i) {
        unordered_set<int> newPositions;
        for (int pos : possiblePositions) {
            if (pos != a[i]) {
                newPositions.insert(pos);
            }
        }
        newPositions.insert(1); // Moving to the beginning.
        newPositions.insert(n); // Moving to the end.
        possiblePositions = newPositions;
        cout << possiblePositions.size() << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }
    return 0;
}
