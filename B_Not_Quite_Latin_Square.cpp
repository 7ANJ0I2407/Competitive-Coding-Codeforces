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
    // cin >> n;
    // map < char,int> mp;
    char a = 'A', b = 'B', c ='C';
    int a_c=0, b_c=0,c_c=0;
    for(int i = 0; i < 9;i++)
    {
        char x;
        cin >> x;
        if(x == a)
        a_c++;
         if(x == b)
        b_c++;
         if(x == c)
        c_c++;
        
    }
    if(a_c != 3 && b_c ==3 && c_c == 3)
    cout << a << endl;
    if(b_c != 3 && a_c == 3 && c_c ==3)
    cout << b << endl;
     if(c_c != 3 && a_c ==3 && b_c ==3)
    cout << c << endl;
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