#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")



int count(const string &l,const string &t) {
    string temp = l + l.substr(0, t.size() - 1);
    int cnt = 0;
    for (int i = 0; i <= temp.size() - t.size(); i++) if (temp.substr(i, t.size()) == t) cnt++;
    return cnt;
}
vector<string> layers(int n, int m, vector<string> &c) {
    vector<string> a;
    int s1 = 0, e1 = n - 1, s2 = 0, e2 = m - 1;
    while (s1 <= e1 && s2 <= e2) {
        string temp;
        for (int j = s2; j <= e2; j++) temp += c[s1][j]; // top
        for (int i = s1 + 1; i <= e1; i++) temp += c[i][e2]; // right
        if (s1 < e1) {
            for (int j = e2 - 1; j >= s2; j--) temp += c[e1][j]; // bottom
        }
        if (s2 < e2) {
            for (int i = e1 - 1; i > s1; i--) temp += c[i][s2]; // left
        }
        a.pb(temp); // add the layer
        s1++; e1--; s2++; e2--; // move to the next layer
    }
    return a;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    forall(i, n, 1) cin >> a[i];
    vector<string> l = layers(n, m, a); // now got the layer
    int ans = 0;
    for (const string &p : l) {
        ans += count(p, "1543"); // we count how many 1543 are in the layer
    }
    cout << ans << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
