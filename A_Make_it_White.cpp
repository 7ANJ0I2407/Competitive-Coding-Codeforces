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
    cin >> s;
    int start = 0, end = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'B') 
        {
            start = i;

            
             break;
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] == 'B') 
        {
            end = i;
            break;
        }
    }
    cout << (end - start + 1) << endl;

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