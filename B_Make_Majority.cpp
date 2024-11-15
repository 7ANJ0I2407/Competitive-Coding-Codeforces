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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    int j = 0;
    forall(i, n, 1)
    {
        if(s[i] == '0') 
        {
            cnt0++;
            j = i;
            while(j < n && s[j] == '0') j++;
            i = j-1;
        }
        else {
            cnt1++;
            // cout << i << endl;
        }
    }
    // cout << cnt0 << " " << cnt1 << endl;
    if(cnt1 > cnt0) cout << "Yes" << endl;
    else cout << "No" << endl;
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