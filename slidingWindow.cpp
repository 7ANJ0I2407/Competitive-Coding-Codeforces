#include<iostream>
#include <vector>
using namespace std;
#define int long long
int subArraySum(vector<int>a, int k)
{
    int n = a.size(),maxi = 0;
    for(int i = 0; i < n - k + 1; i++)
    {
        int sum = 0;
        for(int j = i; j <= i + k - 1; j++)
        {
            sum += a[j];
        }
        maxi = max(sum,maxi);
    }
    return maxi;
}
//// this runs for O(N^2) time and space is O(1)
/////////// Advanced Version ?????


int advSubArrSum(vector< int > x, int k)
{
    int n = x.size(),maxi = 0;
        int sum = 0;
        /// for first sub_array sum ////
        for (int j = 0; j < k; j++)
        {
            sum += x[j];
        }
        maxi = max(maxi,sum);
        /// for next sub_arrays sum we add one elem from last and remove one elem from first
        for (int j = k; j < n; j++) {
            sum += x[j] - x[j - k];
            cout << sum << endl;

            maxi = max(maxi, sum);
        }
    return maxi;
}

/// But here this runs for O(N) time and O(1)

signed main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(-2);
    v.push_back(-4);
    v.push_back(2);
    v.push_back(8);
    v.push_back(5);
    v.push_back(-4);
    cout << advSubArrSum(v,3) << endl;
    return 0;
}