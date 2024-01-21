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

void solve()
{
    int a[] = {12,13,11,45,6};
    int n=5;
    
    // Insertion Sorting (n^2)
    for(int i=0;i <= n-1; i++)
    {
        int j = i;
        while(j > 0 && a[j-1] > a[j]) // compare with previous elements 
        {
            swap(a[j-1],a[j]);
            j--;
        }
    }
    for(int i=0;i<5;i++) cout << a[i] << ' ';
    cout << endl;
    cout << endl;





    //Selection Sort  O(n^2)
    for(int i=0;i <= n-2; i++)
    {
        int mini = i;
        for(int j = i;j<n;j++)
        {
            if(a[mini] > a[j])  // find minimum using j and swap it with i
            {
                mini = j;
            }
            swap(a[mini],a[i]);
        }
    }
    for(int i=0;i<5;i++) cout << a[i] << ' ';
    cout << endl;

    




    // Bubble Sort O(n^2)
   
    for(int i= n-1; i>=0; i--)
    {
        for(int j = 0; j <= i-1; j++) // swap elements 
        {
            if(a[j] > a[j+1])
            swap(a[j],a[j+1]);
        }
    }
    for(int i=0;i<5;i++) cout << a[i] << ' ';
    cout << endl;
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