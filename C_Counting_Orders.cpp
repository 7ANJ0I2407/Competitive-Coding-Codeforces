#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include<algorithm>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define pair pair<int,int>
typedef vector<ll> vi;
#define all(x) x.begin(), x.end()
#define MOD int(1e9)

void solve()
{
    int n; cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b(n);
        for (int i=0; i<n; i++) cin >> b[i];
        sort(b.begin(), b.end(), greater<int>());
        int result = 1;
        for (int i=0; i<n; i++){
            int geq_count = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            result = result * max(geq_count - i, 0) % MOD;
        }
        cout << result << "\n";
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