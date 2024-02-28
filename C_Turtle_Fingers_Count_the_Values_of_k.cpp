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

int p(int x, int y)
    {
        int res = 1;
        forall(i,y,1)
        {
            res *= x;
        }
        return res;
    }

void solve()
{
    int a , b, l;
    int a_pow = 0, all_pow = 0;
    cin >> a >> b >> l;

    

    set<int> ret_s;
    for(int i = 0;;i++)
    {
        a_pow = p(a,i);
        if(a_pow > l) break;
        for(int j = 0;;j++)
        {
            all_pow = a_pow * p(b,j);
            if(all_pow > l) break;
            if(l % all_pow == 0) ret_s.insert(l/all_pow);
        }
    }
    cout << ret_s.size() << endl;
    
    // while(a < l)
    // {
    //     if(l % a == 0) a_pow++;
    //     // else break;
    //     a *= a;
    // }
    // while(b < l)
    // {
    //     if(l % b == 0) 
    //     b_pow++;
    //     else 
    //     break;
    //     b *= b;
    // }
    // set<int> nums;
    // forall(i,a_pow+1,1)
    // {
    //     forall(j,b_pow+1,1)
    //     {
    //         ll t = pow(a,i) * pow(b,j);
    //         if(t <= l && (l % t == 0))
    //         {
    //             nums.insert(l/t);
    //         }
    //     }
    // }
    // cout << nums.size() << endl;
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