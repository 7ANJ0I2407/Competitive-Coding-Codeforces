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
    string s;
    cin >> s; bool flag = false;
    forall(i,s.size(),1)
    {
        int j = i;
        while(s[i] == s[j]) j++;
        for(int k = s.size()-1;k>=j; k--)
        {
            if(s[k] == s[i])
            flag = true;
        }
        if(flag)
        break;
    }
    if(flag)
    cout << "NO" << endl;
    else cout << "YES" << endl;
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