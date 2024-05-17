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
#define all(x) x.begin(), x.end()

bool consonant(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') return false;
    return true;
}

void solve()
{
    string s;
    cin >> s;
    vector<char> ans;
    for(int i = 0; i < s.size(); i++)
    {
        if(consonant(tolower(s[i])))
        {
            ans.pb('.');
            ans.pb(tolower(s[i]));
        }
    }
    for(auto m : ans) cout << m ;
    cout << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
while(t--)
{
solve();
}

return 0;
}