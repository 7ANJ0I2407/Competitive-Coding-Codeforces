#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <deque>
// #include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int, int>
typedef vector<ll> vi;
#define forall(i,a,n) for(long long i = a; i < n; i++)
#define all(x) x.begin(), x.end()

void solve()
{
    int n, c, d;
    cin >> n >> c >> d;
    int a[n * n];
    forall(i, 0, n * n)
    {
        cin >> a[i];
    }
    int f = 1;
    sort(a, a + n * n);
    int b[n * n];

    int temp = 0;

    forall(i, 0, n)
    {
        forall(j, 0, n)
        {
            b[temp] = a[0] + (i * c) + (j * d);
            temp++;
        }
    }
    sort(b, b + n * n);

    forall(i, 0, n * n)
    {
        if (b[i] == a[i])
            continue;
        else
        {
            f = 0;
            break;
        }
    }
    (f == 1) ? cout << "YES" : cout << "NO";

    cout << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}