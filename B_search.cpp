#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

int bSearch(vector<int>v,int target)
{
    int left = 0,right = v.size()-1;
    while(left < right)
    {
        int mid = (left+right)/2;
        if(v[mid] < target) left = mid+1;
        if(v[mid] >= target) right = mid;
    }
    return  (v[left] == target) ? left : -1;
}

int main()
{
    vector<int> a;
    a.push_back(5); //0
    a.push_back(7); //1
    a.push_back(7);//2
    a.push_back(7);//3
    a.push_back(55);//4
    cout << bSearch(a,7) << endl;


}