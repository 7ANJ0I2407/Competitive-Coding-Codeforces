#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
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
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = sqrt(n);
    if(x * x != n)
    {
        cout << "No" << endl;
        return;
    }
    bool check = true;
    for(int i = 0; i < x; i++)
    {
        if(s[i] != '1' || s[n - x + i] != '1')
        {
            check = false;
            break;
        }
    }
    for(int i = 1; i < x - 1; i++)
    {
        if(s[i * x] != '1' || s[i * x + x - 1] != '1')
        {
            check = false;
            break;
        }
        for(int j = 1; j < x - 1; j++)
        {
            if(s[i * x + j] != '0')
            {
                check = false;
                break;
            }
        }
    }
    if(check)
    {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
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