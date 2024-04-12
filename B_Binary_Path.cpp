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
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()

void solve() {
    int n ;
    string temp1 , temp2 ;
    cin >> n ;
    cin >> temp1  >> temp2 ;

    map<string, int> p ;
    for (int i = 0 ; i < n ; i++) {
        string temp_store = temp1.substr(0 , i + 1) + temp2.substr(i, n);
        p[temp_store]++ ;
    }

    cout << p.begin()->first << endl;
    cout << p.begin()->second << endl;
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
