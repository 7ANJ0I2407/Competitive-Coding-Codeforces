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
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
char arr[4][10000001];

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 1;
    // cout << s1 << s2 << endl;
    for(int i = 0; i < n; i++)
    {
        cout << s1[i];
        if(i == n-1)
        {
            cout << s2[n-1];
            break;
        }
        if(s1[i+1] > s2[i])
        {
            for(int j = i; j < n; j++) cout << s2[j];
            break;
        }
        else if(s1[i+1] == s2[i]) cnt++;
        else cnt = 1;
    }
    cout << endl;
    cout << cnt << endl;
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
