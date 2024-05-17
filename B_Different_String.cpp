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
    set<char> st;
    for(int i = 0; i < s.size(); i++) st.insert(s[i]);
    if(st.size() == 1)
    {
        cout << "NO"<< endl;
        return;
    }
    else{
        cout << "YES" << endl;
        char temp = s[0];
        forall(i,s.size(),1)
        {
            if(s[i] != temp)
            {
                temp = s[i];
                s[i] = s[0];
                break;
            }
        }
        // char x = s[0];
        s[0] = temp;
        cout << s << endl;
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