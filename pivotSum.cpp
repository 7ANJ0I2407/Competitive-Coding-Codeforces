#include <iostream>
#include <vector>
using namespace std;

int pivotSum(vector<int> s)
{
    int n = s.size();
    int total_sum = 0, curr_sum = 0;
    for (const int a : s)
        total_sum += a;
    // cout << total_sum << endl;
    for (int i = 0; i < n; i++)
    {
        curr_sum += s[i];
        int right_sum = total_sum - curr_sum;
        int left_sum = curr_sum - s[i];
        if(left_sum == right_sum)
        return i;
    }
    // cout << -1 << endl;
}

int main()
{
    vector<int> a;
    a.push_back(2); // 0
    a.push_back(6); //1
    a.push_back(5); // 2
    a.push_back(5); // 3
    a.push_back(1); //4
    a.push_back(2);
    a.push_back(5);
    a.push_back(5);
    cout << pivotSum(a) << endl;
    return 0;
}