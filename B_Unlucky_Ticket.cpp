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
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    string s1 = s.substr(0,n);
    string s2 = s.substr(n,n);
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if(n == 1)
    {
        if(s[0] == s[1])
        {
            cout << "NO" << endl;
            return;
        }
        else
        {
            cout << "YES" << endl;
            return;
        }
    }
    for(int i = 0; i < n - 1; i++)
    {
        if((s1[i] >= s2[i] && s1[i + 1] <= s2[i + 1]) || (s1[i] <= s2[i] && s1[i + 1] >= s2[i + 1])) 
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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