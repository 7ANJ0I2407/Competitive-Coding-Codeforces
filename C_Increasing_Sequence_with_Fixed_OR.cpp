#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a;
        for (int i = 63; i >= 0; --i) {
            long long x = 1LL << i;
            if ((x & n) == x && x != n) {
                a.push_back(n - x);
            }
        }
        a.push_back(n);
        cout << a.size() << endl;
        for (long long i : a) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
