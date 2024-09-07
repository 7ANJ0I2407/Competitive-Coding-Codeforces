#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string a;
    cin >> a;

    unordered_map<int, int> d;
    d[0] = 1;
    long long res = 0;
    int ans = 0;

    for (int i = 0; i < n; ++i) {
        int s = a[i] - '0';
        ans += s - 1;
        res += d[ans];
        d[ans]++;
    }
    cout << res << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
