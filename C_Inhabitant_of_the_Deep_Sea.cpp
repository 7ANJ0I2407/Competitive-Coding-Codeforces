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
    int a, b;
    cin >> a >> b;
    deque<int> dq(a);
    forall(i,a,1) cin >> dq[i];
    while(dq.size() > 1 && b)
    {
        int mi = min(dq.front(), dq.back());
        if(b < 2 * mi)
        {
            dq.front() -= (b/2) + (b%2);
            dq.back() -= b/2;
            b = 0;
        }
        else
        {
            dq.front() -= mi;
            dq.back() -= mi;
            b -= 2 * mi;
        }
        if(dq.front() == 0) dq.pop_front();
        if(dq.back() == 0) dq.pop_back();
    }
    int ans = a - dq.size();
    cout << ans + (dq.size() && dq.front() <= b) << endl;

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