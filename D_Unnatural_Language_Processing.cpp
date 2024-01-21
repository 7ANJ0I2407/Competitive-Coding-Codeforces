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
    int n;
    cin >> n;
    vector<char>s(n);
    forall(i,n,1) cin >> s[i];
    string ans = "";
    while(!s.empty())
    {
        int x;
        if(s.back() == 'a' || s.back() == 'e') x = 2;
        else x = 3;
        while(x--)
        {
            ans += s.back();
            s.pop_back();
        }
        ans += '.';
    }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout << ans << endl;
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