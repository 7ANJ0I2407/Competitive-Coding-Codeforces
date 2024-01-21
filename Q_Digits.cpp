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

void solve1(int n)
{
    if(n == 0 ) 
    {
        return;
    }
    cout << n%10 << ' ';
    solve1(n/10);
    
}

void solve(int n)
{
    if(n == 0) 
    {
        cout << 0 << endl;
        return;
    }
    solve1(n);
    cout << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
    int n;
    cin >> n;
    solve(n);
}

return 0;
}