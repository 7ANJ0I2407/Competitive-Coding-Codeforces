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
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()

vector<int> sieve(int n) {
    vector<int> prime(n + 1, 1);
    
    for (int p = 2; p * p <= n; ++p) {
        if (prime[p] == 1) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = 0;
        }
    }
    return prime;
}
vector<int> primes = sieve(1000000);
void solve()
{
    int d;
    cin >> d;
    int a = 1, b, c;
    for(int i = 0; i <= 1000000; i++)
    {
        if(primes[i])
        {
            if((i >= (a + d))) 
            {
                b = i;
                break;
            }
        }
    }
    for(int i = 0; i <= 1000000; i++)
    {
        if(primes[i])
        {
            if((i >= (b + d))) 
            {
                c = i;
                break;
            }
        }
    }
    cout << 1ll*b*c << endl;

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