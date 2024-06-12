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

vector<int> convertToAscii(const string& input) {
   vector<int> asciiValues;
    for (char c : input) {
        asciiValues.push_back(static_cast<int>(c));
    }
    return asciiValues;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> asciiValues = convertToAscii(s);
    for(int i = 0; i < asciiValues.size() - 1; i++)
    {
        if(asciiValues[i] > asciiValues[i+1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout <<"YES" << endl;
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