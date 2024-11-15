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

void solve()
{
    int n, k;
    cin >> n >> k;
    if(n == 1 && k == 0) 
    {
        cout << "0 0" << endl;
        return;
    }
    if(k == 0 || k > 9*n) 
    {
        cout << "-1 -1" << endl;
        return;
    }
    string s1(n, '0'), s2(n, '0');
    int sum = k;
    for(int i = n-1; i >= 0; i--)
    {
        int dig = max(0ll, sum - 9 * i);
        s2[n - i - 1] = to_string(dig)[0];
        sum -= dig;
        // cout << dig << " ";
    }
    // agar pahle digit 0 hai toh usko 1 kar do aur uske baad wale digit se 1 minus kar do
    if (s2[0] == '0') {
        s2[0] = '1';
        for (int i = 1; i < n; i++) {
            if (s2[i] > '0') {
                s2[i]--;
                break;
            }
        }
    }
    // reverse(all(s2));
    cout << s2 << " ";


    int x = k;
    // max string value
    for(int i = 0; i < n; i++)
    {
        int dig = min(9ll, x);
        s1[i] = to_string(dig)[0];
        x -= dig;
        // cout << dig << " ";
    }

    // reverse(all(s1));
    cout << s1 << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
while(t--)
{
solve();
}

return 0;
}

