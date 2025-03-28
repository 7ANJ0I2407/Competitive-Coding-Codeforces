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
        int position = 0, move = 1;
        bool sakurakoTurn = true;

        while (true) {
            if (sakurakoTurn) {
                position -= move;
            } else {
                position += move;
            }

            if (abs(position) > n) {
                if (sakurakoTurn) {
                    cout << "Sakurako" << endl;
                } else {
                    cout << "Kosuke" << endl;
                }
                break;
            }

            move += 2;
            sakurakoTurn = !sakurakoTurn;
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