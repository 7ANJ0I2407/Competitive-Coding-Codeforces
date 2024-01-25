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
    int i , j, k;
    string s; cin >> s;
    int n = s.size();
    // for single digit nums
    for(i = 0; i < n; i++)
    {
        int num = s[i] - '0';
        if((num % 8 == 0 || num == 0))
        {
            cout << "YES" << endl;
            cout << num << endl;
            return;
        }
    }
    //for 2 digit nums
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            int num = (s[i] - '0')*10 + (s[j] - '0');
            if(num % 8 == 0)
            {
                cout << "YES" << endl;
                cout << num << endl;
                return;
            }
        }

    }
    // for 3 digit nums
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            for(k = j + 1; k < n; k++)
            {
                int num = (s[i] - '0')*100 + (s[j] - '0')*10 + (s[k]-'0');
                if(num % 8 == 0)
                {
                    cout << "YES" << endl;
                    cout << num << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
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