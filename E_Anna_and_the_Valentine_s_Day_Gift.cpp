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
    int n , m;
    cin >> n >> m;
    vi a(n), zeros;
    forall(i,n,1) cin >> a[i];
    for(auto i : a)
    {
        int zero = 0, dig = 0;
        while(i % 10 == 0) zero++, i /= 10;
        while(i) dig++, i /= 10;
        m -= dig;
        zeros.push_back(zero);
    }

    sort(zeros.begin(), zeros.end(), greater<int>());
    for(int i = 1; i < zeros.size(); i += 2) m-= zeros[i];
    if(m >= 0) cout << "Anna" << endl;
    else cout << "Sasha" << endl;
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