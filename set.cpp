#include <iostream>
#include <map>
#include <set>
using namespace std;
bool comp(int a, int b)
{
    return a > b;
}
int main()
{
    map<int, string> m;
    set<int, greater<int> > s;
    set<int, greater<int> >::iterator itr;
    unordered_map<int, string> mp;
    mp[3] = "Sanjoy";
    cout << mp[3] << endl;
    // s = {1, 5, 3, 7, 8, 10};
    // m.insert(2,"sanjoy");
    // m.insert(4,"rakesh");
    s.insert(1);
    s.insert(7);
    s.insert(4);
    s.insert(2);
    s.insert(10);
    s.insert(5);

    vector<int> a;
    a.push_back(10);
    a.push_back(5);
    a.push_back(2);
    a.push_back(7);
    a.push_back(9);

    sort(a.begin(), a.end(), comp);

    for (auto i : a)
        cout << i << ' ';
    cout << endl;

    m[1] = "sanjoy";
    m[5] = "Rakesh";
    // cout << m[1] << endl;

    // cout << s.end() << endl;
    // cout << endl;

    // for (itr = s.begin(); itr != s.end(); itr++)
    //     cout << *itr << endl;

    // for (int i : s)
    //     cout << i << endl;

    return 0;
}