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

void solve()
{
    int n;
    cin >> n;
    vi a(n+1, 0);
    forall(i,n,1)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    int count = 0;
    if(n == 1 && a[0] == 1)
    {
        cout << 1 << endl;
        return;
    } 
    for(int i = 0; i <= n; i++){
        count += (a[i] == 1);
        if(count == 2 || a[i] == 0)
        {
            cout << i << endl;
            break;
        }
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