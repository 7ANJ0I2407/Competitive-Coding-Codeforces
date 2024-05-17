#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
//#include <bits/stdc++.h>
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

void solve() {
    int n, m, k, a[200005], b[200005], now = 0, ans = 0;
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) { // change the loop condition to < n
        cin >> a[i]; // change the index to i
    }
    map<int, int> mp;
    for (int i = 0; i < m; i++) { // change the loop condition to < m
        cin >> b[i]; // change the index to i
        mp[b[i]]++; // map the frequency of each element in the array of b
    }
    for (int i = 0; i < n; i++) { // change the loop condition to < n
        if (--mp[a[i]] < 0) { // if the frequency of the element in the array of a is less than 0 then increment now
            now++;
        }
        if (i >= m - 1) { // change the condition to i >= m - 1
            if (m - k >= now) { // if the difference between m and k is greater than or equal to now then increment ans
                ans++;
            }
            int c = a[i - m + 1]; // c is the element at the i - m + 1 index in the array of a
            if (mp[c]++ < 0) { // if the frequency of the element in the array of b is less than 0 then decrement now
                now--;
            }
        }
    }
    cout << ans << '\n';
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