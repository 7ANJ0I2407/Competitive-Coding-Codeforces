#include <iostream>
#include <string>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t, m;
    string s;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
       cin >> t >> m;
       while(t--)
       {
           a.push_back(m);
       }
    }
    sort(a.begin(), a.end());
    cout << endl;
    int l = 0, r = a.size() - 1;
    int maxi = INT_MIN;
    while(l < r)
    {
        int sum = a[l] + a[r];
        maxi = max(maxi, sum);
        l++;
        r--;
        
    }
    cout << maxi << endl;

    return 0;
}
