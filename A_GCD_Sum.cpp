#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
#include<algorithm>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define all(x) x.begin(), x.end()

ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}

int gcdSum(int n)
{
    int temp = n,digitSum = 0;
    while(temp)
    {
        digitSum += temp % 10;
        temp /= 10;
    }
    int gcdS = gcd(n,digitSum);
    return gcdS;

}

void solve()
{
    int n;
    cin >> n;
    if(gcdSum(n) != 1)
    cout << n << endl;
    else if(gcdSum(n+1) != 1)
    cout << n+1 << endl;
    else if(gcdSum(n+2) != 1)
    cout << n+2 << endl;

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