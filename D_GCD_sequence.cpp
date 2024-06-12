#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
#include<algorithm>
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
int N = 1e5+5;
int n;
vi a(N);
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool check(int idx)
{
    vi dub(n-1);
    int t = 0;
    forall(i,n,1)
    {
        if(i == idx) continue;
        dub[t++] = a[i];
    }
    int prev = 1;
    forall(i,n-2,1)
    {
        int gcd_val = gcd(dub[i], dub[i+1]);
        if(prev > gcd_val) return false;
        prev = gcd_val;
    }
    return true;
}

void solve()
{
    cin >> n;
    forall(i,n,1) cin >> a[i];
    int prev = 1;
    int idx = -1;
    forall(i, n-1, 1)
    {
        int gcd_val = gcd(a[i], a[i+1]);
        if(prev > gcd_val)
        {
            idx = i; break;
        }
        prev = gcd_val;
    }
    if(idx == -1)
    {
        cout << "YES" << endl;
        return;
    }
    else if(check(idx) || check(idx+1) || check(idx-1))
    {
        cout << "YES" << endl;
        return;
    }
    else cout << "NO" << endl;
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