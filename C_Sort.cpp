#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve() {
    int n, q;
    cin >> n >> q;
    string s, r;
    cin >> s >> r;
    vector<vector<int> > s1(26, vector<int>(n + 1, 0));
    vector<vector<int> > s2(26, vector<int>(n + 1, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < 26; ++j) {
            s1[j][i + 1] = s1[j][i];
            s2[j][i + 1] = s2[j][i];
        }
        s1[s[i] - 'a'][i + 1]++;
        s2[r[i] - 'a'][i + 1]++;
    }
    while (q--) {
        int x, y;
        cin >> x >> y;
        x--; y--;
        vector<int> a(26, 0), b(26, 0);
        for (int i = 0; i < 26; ++i) {
            a[i] = s1[i][y + 1] - s1[i][x];
            b[i] = s2[i][y + 1] - s2[i][x];
        }

        int ans = 0;
        for (int i = 0; i < 26; ++i) {
            ans += abs(a[i] - b[i]);
        }

        cout << ans / 2 << endl;
    }
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
solve();
}

return 0;
}