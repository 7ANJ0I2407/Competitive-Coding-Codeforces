#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define int long long
void solve()
{
    int n, ans, p = 1;
    cin >> n;
    n++;
    auto prod = [](ll k)
    {
        int p = 1;
        while (k != 0)
        {
            p *= (k % 10);
            k /= 10;
        }
        return p;
    }; 
    while (n != 0)
    {
        ans = max(ans, prod(n * p - 1));
        n /= 10;
        p *= 10;
    }
    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t;
    solve();

    return 0;
}