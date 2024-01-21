#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
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

void solve()
{
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for(auto m : s)
    {
        if(m == '0') zero++;
        else one++;
    }
    if(zero == s.size() || (one == s.size())) cout << s << endl;
    else 
    {
        for(int i=0;i<s.size()-1;i++)
        {
            cout << s[i];
            if(s[i] == s[i+1]) cout << !(s[i]-'0');
        }
        cout << s[s.size()-1] << endl;
    }
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