#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n;
    cin >> n;
    if(n % 2 == 0) 
    {
        cout << -1 << endl;
        return;
    }
    vector<int> a(n + 1);
    int pos = -1;
    for(int i = 1; i <= n; i++)
    {
        a[(pos + i) % n] = i;
        pos++;
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}