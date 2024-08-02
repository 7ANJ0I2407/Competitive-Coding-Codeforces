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
    int n, k;
    cin >> n >> k;
    
    vector<string> v;
    forall(i, n, 1) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    int size = n / k;
    vector<vector<int> > ans(size, vector<int>(size));
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            ans[i][j] = v[i * k][j * k] - '0';
        }
    }
    forall(i, size, 1) {
        forall(j, size, 1) {
            cout << ans[i][j];
        }
        cout << endl;
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