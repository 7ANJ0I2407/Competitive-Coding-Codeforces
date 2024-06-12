#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1, 0);
    unordered_map<int, int> pos;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int q;
    cin >> q;
    int left = 0, right = 0;
    while (q--)
    {
        int p;
        cin >> p;
        left += pos[p];
        right += n - pos[p] + 1;
    }
    cout << left << ' ' << right << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
