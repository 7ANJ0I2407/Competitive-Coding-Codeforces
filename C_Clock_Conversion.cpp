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
    string temp = s.substr(0,2);
    int num = stoi(temp);
    // cout << num << endl;
    if(num == 0) cout << 12 << s.substr(2,3) << " PM" << endl;
    else if(num < 12) cout << s << " AM"<< endl;
    else{
        if(num == 12)
        {
            cout << s;

        } 
        else{
        int rem = num - 12;
        string modify = to_string(rem);
        if(modify.size() < 2) cout << 0;
        s.replace(0,2,modify);
        cout << s;
        }
        cout <<" PM" << endl;
    }
    // cout << num<< endl;
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