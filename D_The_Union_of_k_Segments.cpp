#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> events;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        events.emplace_back(x, 1); 
        events.emplace_back(y, -1);
    }
    
    sort(events.begin(), events.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    });
    
    int active = 0, left = -1;
    vector<pair<int, int>> res;
    
    for (auto [point, type] : events) {
        if (active == k - 1 && type == 1) {
            left = point;
        }
        else if (active == k && type == -1) {
            res.emplace_back(left, point);
        }
        active += type;
    }
    
    cout << res.size() << "\n";
    for (auto [l, r] : res) {
        cout << l << " " << r << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}