#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include <deque>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define rfor(n) for(int i=n-1;i>=0;i--)
#define for1(n) for(int i=0;i<n;i++)
#define vect(z) for(auto &val : z)
#define nesfor(x,y) for(long long i=0;i<x;i++)for(long long j=0;j<y;j++)
#define rep(i,a,b) for(int i=a;i<b;i++)
typedef vector<ll> vi;
ll gcd(ll A, ll B) {if (B == 0)return A; else return gcd(B, A % B);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll factorial(ll n) {ll factorial = 1;for (ll i = 2; i <= n; i++)factorial = factorial * i;return factorial;}
ll reverse(ll n) {ll res=0; while(n){res=res*10+n%10; n=n/10;} return res;}
void swap(ll &x, ll &y) {ll temp = x; x = y; y = temp;}
// vi factors(ll A){ vi v;if(A==1){v.push_back(1);return v;}for(int i=2;i*i<=A;i++){if(A%i==0 ){v.push_back(i);if(A/i!=i)v.push_back(A/i);}}sort(v.begin(),v.end());return v;}
vector<int> getPrimeFactors(int n) {int k = 2; vector<int> factors; while (k*k <= n) { if (n%k == 0) { factors.push_back(k); n /= k; } else { k++; } } if (n > 1) { factors.push_back(n); } return factors;}


signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
cin >> t;
while(t--)
{
    int a;
    cin >> a;
    vi v;
    v.pb(2);
    int height = 2;
    while(1)
    {
        int req = v.back() + (3 * height - 1);
        v.pb(req);
        height++;
        if(req > 2e9)
        break;
    }
    int ans = 0;
    while(a > 1)
    {
        int index = upper_bound(v.begin(),v.end(),a) - v.begin();
        index--;
        ans++;
        a -= v[index];
    }
    cout << ans << endl;

}

return 0;
}