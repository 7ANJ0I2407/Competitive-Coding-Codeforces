#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
#define int long long

bool check(vector<int> &a, int m, int k)
{
    int n = a.size();
    int requiredSum = 0;
    for(int i = (n - 1) / 2; i < n; i++) {
        if(a[i] < m) {
            requiredSum += (m - a[i]);
            if(requiredSum > k) {
                return false;
            }
        }
    }
    return true;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 1, r = 2e9;
    while(l < r) {
        int m = (l + r + 1) / 2;
        if(check(a, m, k)) {
            l = m;
        } else {
            r = m - 1;
        }
    }
    cout << l << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
