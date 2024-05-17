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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '*')
        {
            cnt++;
        }
    }
    cnt = (cnt + 1) / 2;
    int i = 0;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '*')
        {
            cnt--;
            if(cnt == 0)
            {
                break;
            }
        }
    }
    int rz = 0;
    cnt = 0;
    for(int j = i; j >= 0; j--)
    {
        if(s[j] == '.')
        {
            cnt++;
        }
        else rz += cnt;
    }
    cnt = 0;
    for(int j = i + 1; j < n; j++)
    {
        if(s[j] == '.')
        {
            cnt++;
        }
        else rz += cnt;
    }
    cout << rz << endl;
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