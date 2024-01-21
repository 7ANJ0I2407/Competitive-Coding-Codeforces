#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> uniqueElemetInWindow(vector<int> a, int k)
{
    int size = a.size();
    vector<int> ans;
    map<int, int> mp;
    for (int i = 0; i < k; i++)
    {
        mp[a[i]]++;
    }
    ans.push_back(mp.size());
    for (int i = k; i < size; i++)
    {
        if (mp[a[i - k]] == 1)
            mp.erase(a[i - k]);
        else
            mp[a[i - k]]--;
        mp[a[i]]++;
        ans.push_back(mp.size());
    }
    return ans;
}

int main()
{
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);
    ans.push_back(1);
    ans.push_back(3);
    ans.push_back(4);
    ans.push_back(2);
    ans.push_back(3);
    vector<int> a = uniqueElemetInWindow(ans, 4);
    for (int i : a)
        cout << i << ' ';
    cout << endl;

    return 0;
}