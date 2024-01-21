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
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    bool flag = false;
    int even = 0, odd = 0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if(x > 0)
        even++;
        else if(x ==0)
        flag = true;
        else
        odd++;
    }
    if(flag)
    {
        cout << 0 << endl;
        return;
    }
    if(odd == 0)
    {
        cout << '1' << endl;
        cout << "1 0" << endl;
    }
    if(odd != 0)
    {
       if(odd % 2 == 1)
       {
        cout << 0 << endl;
       } 
       else
       {
        cout << 1 << endl;
        cout << "1 0" << endl;
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