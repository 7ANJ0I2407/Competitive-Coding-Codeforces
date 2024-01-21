#include<iostream>
using namespace std;
#define int long long

void solve()
{
    int a,b,d;
    cin >> d;
    for(int i=d+1; ; i++)
    {
        int cnt=0;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j ==0)
            cnt++;
        }
        if(cnt == 0)
        { 
            a = i;
            break;
        } 
    }

    // cout << a << endl;

    for(int i=a+d; ; i++)
    {
        int cnt=0;
        for(int j=2;j*j<=i;j++)
        {
            if(i%j ==0)
            cnt++;
        }
        if(cnt == 0)
        { 
            b = i;
            break;
        } 
    }

        // cout << b << endl;
        cout << min(a*b,a*b*b) << endl;

}

signed main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}