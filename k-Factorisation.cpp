#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t, k;
    cin >> t >> k;
    // int t = n;
    vector<int> prime;
    for (int d = 2; d * d <= t; d++)
    {
        while (t % d == 0)
        {
            prime.push_back(d);
            t /= d;
        }
    }
    if (t > 1)
    {
        prime.push_back(t);
    }

    if (prime.size() < k)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < k - 1; i++)
        {
            cout << prime[i] << " ";
        }
        long long temp = 1;
        for (int i = k - 1; i < prime.size(); i++)
        {
            temp *= prime[i];
        }
        cout << temp;
    }
    cout << endl;
}

int main()
{
    solve();
    return 0;
}