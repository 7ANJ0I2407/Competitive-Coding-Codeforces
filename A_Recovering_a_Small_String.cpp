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

void solve()
{
    int n;
    cin >> n;
    vector<char> ans(27);
    char cha = 'a';
    for(int i = 1; i <= 27; i++)
    {
        ans[i] = cha++;
    }
    if(n <= 28)
    {
        cout << "aa" << ans[n-2] << endl;
    }
    else if (n <= 53)
    {
        n -= 26;
        cout <<'a' << ans[n - 1] << 'z' << endl;
    }
    else 
    {
        n -= 52;
        cout << ans[n] << "zz" << endl;

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