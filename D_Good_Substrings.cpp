#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
#include <algorithm>
using namespace std;

#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
// using PII = pair<int, int>;
typedef vector<ll> vi;
#define forall(i, n, x) for (int i = 0; i < n; i += x)
#define f(i, x, n) for (ll i = x; i < n; i++)
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")
int const MOD = 1e9 + 7;

void solve(){
  string s; cin >> s;
  string g; cin >> g;
  int k; cin >> k; 
 
  int n = s.length();
 
  int p1 = 31, m1 = 1e9 + 7;
  int p2 = 37, m2 = 1e9 + 9;
 
  set<pair<int, int> > st;
 
  f(i, 0, n){
    int bad = 0;
    int h1 = 0, h2 = 0;
    f(j, i, n){
      if(g[s[j] - 'a'] == '0') ++bad;
      if(bad > k) break;
 
      h1 = ((h1 * p1) % m1 + (s[j] - 'a' + 1)) % m1;
      h2 = ((h2 * p2) % m2 + (s[j] - 'a' + 1)) % m2;
    //   if(st.find({h1, h2}) == st.end())
    //      st.insert({h1, h2});
    }
  }
 
  int ans = st.size();
  cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0); 
    cin.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}