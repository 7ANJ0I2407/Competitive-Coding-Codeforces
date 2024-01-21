#include <iostream>
#include <vector>
using namespace std;

void subArr(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> subArr;
        for (int j = i; j < n; j++)
        {
            subArr.push_back(v[j]);
            for (auto c : subArr)
                cout << c;
            cout << endl;
        }
    }
}

int main()
{
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(6);
    subArr(a);

    return 0;
}