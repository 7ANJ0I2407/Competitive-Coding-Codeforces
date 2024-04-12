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
    vi v(a);
    forall(i,a,1) cin >> v[i];
    int i = 0, j = a-1;
    int sum = 0, count = 0;
    while(i <= j)
    {
        if(v[i] <= b) count++;
        b -= v[i];
        i++;
        if(v[j] <= b) count++;
        b -= v[j];
        j--;
    }
    cout << count << endl;
    return;
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