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

// question is asking for the minimum number of elements to be removed to make the array ugly
// so we need to find the minimum number of elements that are same in the beginning of the array
// and the end of the array that is minimum length of the prefix and suffix of the array taht contains the same elements

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    map<int,int>mp;
    forall(i,n,1) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    if(mp.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    int currCount = 0, count = n;
    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i] == a[0]) currCount++;
        else
        {
            count = min(count, currCount);
            currCount = 0;
        }
    }
    count = min(count, currCount);
    cout << count << endl;
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