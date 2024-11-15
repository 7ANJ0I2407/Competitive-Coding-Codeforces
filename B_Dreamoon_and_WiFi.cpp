#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include <bits/stdc++.h>
#include <iomanip>
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
    string s, t;
    cin >> s >> t;
    int n = s.size();
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '+') pos++;
        else pos--;
    }

    int pos1 = 0;
    int q = 0;

    for(int i = 0; i < n; i++)
    {
        if(t[i] == '+') pos1++;
        else if(t[i] == '-') pos1--;
        else q++;
    }
    // check how many ways i can choose from ? 2^q possibilities
    // till now i can solve it by brute force
    // number of ? are q
    // so i can choose 2^q possibilities
    // if i choose 1 then i will add 1 to pos1
    // if i choose 0 then i will subtract 1 from pos1
    int ans = 0;
    for(int i = 0; i < (1 << q); i++)
    {
        int tempPos = pos1;
        for(int j = 0; j < q; j++)
        {
            if(i & (1 << j)) tempPos++;
            else tempPos--;
        }
        if(tempPos == pos) ans++;
    }
    cout << fixed << setprecision(12) << (ld)ans / (1 << q) << endl;

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