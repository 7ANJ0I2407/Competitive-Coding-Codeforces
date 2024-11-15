#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define pb push_back
#define ll long long
typedef vector<ll> vi;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    vi idx;
    idx.pb(n - 1);
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] >= s[idx.back()]) idx.pb(i);
    }
    reverse(idx.begin(), idx.end());
    // largest prefix of equal values
    int j = 0;
    while (j < idx.size() && s[idx[0]] == s[idx[j]]) {
        j++;
    }
    int res = idx.size() - j;
    // Apply the swaps on the string s using idx
    for (int i = 0; i < idx.size() - 1 - i; i++) {
        swap(s[idx[i]], s[idx[idx.size() - 1 - i]]);
    }
    if (is_sorted(s.begin(), s.end())) {
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
