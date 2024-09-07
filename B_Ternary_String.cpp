#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

void solve(string &s) {
    int last_pos[4] = {-1, -1, -1, -1};
    int min_length = INT_MAX;
    
    for (int i = 0; i < s.size(); ++i) {
        int num = s[i] - '0';
        last_pos[num] = i;
        
        if (last_pos[1] != -1 && last_pos[2] != -1 && last_pos[3] != -1) {
            int current_length = i - min({last_pos[1], last_pos[2], last_pos[3]}) + 1;
            min_length = min(min_length, current_length);
        }
    }
    
    if (min_length == INT_MAX) {
        cout << 0 << endl;
    } else {
        cout << min_length << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
