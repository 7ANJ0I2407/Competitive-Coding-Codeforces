#include<iostream>
#include<vector>
#include <deque>
using namespace std;

void negNumSubArr(vector< int > arr, int k)
{
    int n = arr.size();
    deque<int> dq;
    /// for first sub_array iteration ////
    for (int j = 0; j < k; j++)
    {
        if(arr[j] < 0)
        {
            dq.push_back(j);
        }
    }
    if (!dq.empty())
    {
        cout << arr[dq.front()] << " ";
    }
    else {
        cout << 0 << " ";
    }
    /// for next sub_arrays sum we add one elem from last and remove one elem from first
    for (int j = k; j < n; j++)
    {
        int add_index = j;
        int remove_index = j - k;

        if(dq.front() == remove_index)
            dq.pop_front();

        if(arr[add_index] < 0)
            dq.push_back(add_index);

        if (!dq.empty())
        {
            cout << arr[dq.front()] << " ";
        }
        else {
            cout << 0 << " ";
        }
    }
}

int main()
{
    vector<int> v;
    v.push_back(12);
    v.push_back(-2);
    v.push_back(-4);
    v.push_back(2);
    v.push_back(8);
    v.push_back(5);
    v.push_back(-4);
    negNumSubArr(v,3);
    cout << endl;
    return 0;
}
