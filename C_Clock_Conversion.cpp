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
    string s;
    cin >> s;
    string h = s.substr(0,2);
    string m = s.substr(3);
    int hh = stoi(h);
    int mm = stoi(m);
    if(hh < 12 && hh != 0)
    {
        cout << s << " AM" << endl;
    }
    else if(hh == 00)
    {
        cout << 12 << ":";
        cout << (mm < 10 ? "0" + to_string(mm) +" AM" : to_string(mm) + " AM") << endl;
    }
    else if (hh >= 12)
    {
        if(hh == 12)
        {
            cout << hh << ":";
            cout << (mm < 10 ? "0" + to_string(mm) +" PM" : to_string(mm) + " PM") << endl;

        }
        else
        {
            cout << ((hh - 12) < 10 ? "0" + to_string(hh - 12) : to_string(hh - 12)) << ':';
            cout << (mm < 10 ? "0" + to_string(mm) +" PM" : to_string(mm) + " PM") << endl;
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