#include "bits/stdc++.h"
#include <iostream>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
#define ull signed long long int
#define ll long long int
#define eb emplace_back
#define pb push_back
#define mod 1000000007
#define setull set<ull>
#define mapull map<ull, ull>
#define pairull pair<ull, ull>
#define vull vector<ull>
#define vecpair vector<pair<ull, ull>>
#define printi(v)         \
    for (auto i : v)      \
        cout << i << " "; \
    cout << nw;
#define printj(v)         \
    for (auto j : v)      \
        cout << j << " "; \
    cout << nw;
#define printk(v)         \
    for (auto k : v)      \
        cout << k << " "; \
    cout << nw;
#define repi(s, e, t) for (ull i = s; i <= e; i += t)
#define repj(s, e, t) for (ull j = s; j <= e; j += t)
#define repk(s, e, t) for (ull k = s; k <= e; k += t)
#define rep(v, s, e, t) for (ull v = s; v <= e; v += t)
#define rev_rep(v, s, e, t) for (ull v = s; v >= e; v -= t)
#define rev_repi(s, e, t) for (ull i = s; i >= e; i -= t)
#define rev_repj(s, e, t) for (ull j = s; j >= e; j -= t)
#define rev_repk(s, e, t) for (ull k = s; k >= e; k -= t)
#define rev_str(s) reverse(s.begin(), s.end())
#define rev_vec(v) reverse(v.begin(), v.end())
#define rev_arr(a, n) reverse(a, a + n)
#define sort_str(s) sort(s.begin(), s.end())
#define sort_vec(v) sort(v.begin(), v.end())
#define sort_arr(a, n) sort(a, a + n)
#define sort_dec_str(s) sort(s.rbegin(), s.rend())
#define sort_dec_vec(v) sort(v.rbegin(), v.rend())
// using namespace __gnu_pbds;
using namespace std;
// typedef tree<ull /*datatype*/ ,null_type, less<ull>/*comparator: greater<ull> for descending*/, rb_tree_tag, tree_order_statistics_node_update> pbds; // *s.find_by_order(x), s.order_of_key(x)
#define nw '\n'
ull add(ull x, ull y)
{
    ull ans = (((x % mod) + (y % mod)) % mod);
    if (ans < 0)
    {
        ans += mod;
    }
    return ans;
}
ull sub(ull x, ull y)
{
    ull ans = (((x % mod) - (y % mod)) % mod);
    if (ans < 0)
    {
        ans += mod;
    }
    return ans;
}
ull mul(ull x, ull y)
{
    ull ans = (((x % mod) * (y % mod)) % mod);
    return ans;
}
bool isprime(ull n)
{
    if (n == 1)
    {
        return false;
    }
    repi(2, sqrt(n), 1)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
vector<ull> allprimebetween(ull l, ull r)
{
    vector<bool> v(1000005, true);
    v[0] = v[1] = false;
    for (ull i = 2; i * i <= 1000001; i++)
    {
        if (v[i])
        {
            for (ull j = i * i; j <= 1000001; j += i)
            {
                v[j] = false;
            }
        }
    }
    vector<ull> prime;
    for (ull i = l; i <= r; i++)
    {
        if (v[i])
        {
            prime.pb(i);
        }
    }
    return prime;
}

vector<ull> getfactors(ull n)
{
    vector<ull> v;
    for (ull i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.pb(i);
            if ((n / i) != i)
            {
                v.pb(n / i);
            }
            else
            {
                break;
            }
        }
    }
    sort_vec(v);
    return v;
}
bool ispalindrome(string s)
{
    string t(s.rbegin(), s.rend());
    return s == t;
}
ull ncrmodp(ull n, ull r, ull p)
{
    if (r > (n - r))
    {
        r = n - r;
    }
    ull C[r + 1];
    memset(C, 0, sizeof(C));
    C[0] = 1;
    repi(1, n, 1)
    {
        rev_repj(min(i, r), 1, 1) // for (ull j = min(i, r); j > 0; j--)
        {
            C[j] = ((C[j] + C[j - 1]) % p);
        }
    }
    return C[r];
}
ull gethighestoddfactor(ull n)
{
    while (n > 0)
    {
        if (n % 2 != 0)
        {
            return n;
        }
        n = n / 2;
    }
    return 1;
}
bool issorted(ull a[], ull n)
{
    ull b[n];
    repi(0, n - 1, 1)
    {
        b[i] = a[i];
    }
    sort_arr(b, n);
    repi(0, n - 1, 1)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}
ull power(ull x, ull y, ull p)
{
    ull res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y % 2 != 0)
        {
            res = mul(res, x);
        }
        x = mul(x, x);
        y = (y / 2);
    }
    return res;
}

ull modulo_div(ull a, ull b)
{
    return mul(a, power(b, mod - 2, mod));
}
ull ncrfact(ull n, ull r)
{
    if (r == 0 || r == n)
    {
        return 1;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    ull n, m, k;
    cin >> n >> m >> k;
    ull a[n];
    repi(0, n - 1, 1)
    {
        cin >> a[i];
    }
    vector<vector<ull> > v;
    repi(1, m, 1)
    {
        ull l, r, d;
        cin >> l >> r >> d;
        l--;
        r--;
        v.pb({l, r, d});
    }
    vector<ull> ps(m + 1, 0);
    repi(1, k, 1)
    {
        ull l, r;
        cin >> l >> r;
        l--;
        r--;
        ps[l]++;
        ps[r + 1]--;
    }
    ull sum = 0;
    ull ans = 0;
    vector<ull> t(n + 1, 0);
    repi(0, m - 1, 1)
    {
        sum += ps[i];
        // cout<<sum<<" ";
        // i operation would be performed sum times
        v[i][2] *= sum;
        // cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<nw;
        t[v[i][0]] += v[i][2];
        t[v[i][1] + 1] -= v[i][2];
    }
    sum = 0;
    repi(0, n - 1, 1)
    {
        sum += t[i];
        t[i] = sum;
        cout << t[i] + a[i] << " ";
    }
    cout << nw;
    return 0;
}