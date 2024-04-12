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
vi binary_array;
bool fun(int n)
{
    if(n == 1) return true;
    bool check = false;
    for(auto i : binary_array)
    {
        if(n % i == 0) 
        { 
            check |= fun(n/i);
        }
    }
    return check;
}

void solve()
{
    int n;
    cin >> n;
    cout << (fun(n) ? "YES" : "NO") << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);

for(int i = 2; i < 100005; i++)
{
    bool check = false;
    int curr = i;
    while(curr)
    {
        if(curr % 10 > 1){check = true; break;}
        curr /= 10;
    }
    if(!check) binary_array.push_back(i);
}
int t = 1;
cin >> t;
while(t--)
{
solve();
}
return 0;
}