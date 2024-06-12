#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> st(s.begin(), s.end());
    vector<char> a(st.begin(), st.end());
    
    map<char, char> mp;
    int i = 0, j = a.size() - 1;
    while (j >= i) {
        mp[a[i]] = a[j];
        mp[a[j]] = a[i];
        i++;
        j--;
    }

    string ans = "";
    for (char c : s) {
        ans += mp[c];
    }
    
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
