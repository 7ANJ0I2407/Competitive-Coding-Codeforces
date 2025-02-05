#include<iostream>
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")

int n = 8;
vi arr = {1, 2, 3 , 4 ,5, 6, 7, 8};
vector<int> sgt(2 * n);

void update(int index, int start, int end, int pos, int val)
{
    if(start == end)
    {
        arr[pos] = val;
        sgt[index] = val;
        return;
    }
    int mid = (start + end) / 2;
    if(mid >=  pos)
    {
        update(2 * index, start, mid, pos, val);
    }
    else {
        update(2 * index + 1, mid + 1, end, pos, val);
    }
    sgt[index] = (sgt[2 * index] + sgt[2 * index + 1]);
}

int query(int index, int start, int end, int l, int r)
{
    // if the current segment is completely inside the query segment
    if(start >= l && end <= r)
    {
        return sgt[index];
    } 
    // if no overlap
    if(start > r || end < l)
    {
        return 0;
    }
    // partial overlap
    int mid = (start + end) / 2;
    int left = query(2 * index, start, mid, l, r);
    int right = query(2 * index + 1, mid + 1, end, l , r);
    return (left + right);
}

void buildTree(int index, int start, int end)
{
    if(start == end)
    {
        sgt[index] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    buildTree(2 * index, start, mid);
    buildTree(2 * index + 1, mid + 1, end);
    sgt[index] = (sgt[2 * index] + sgt[2 * index + 1]);
}


void solve()
{
    buildTree(1, 0, n-1);
    for(auto _ : sgt) cout << _ << ' ';
    cout << endl;
    for(auto _ : arr) cout << _ << ' ';
    cout << endl;
    update(1, 0, n-1, 0, 200);
    for(auto _ : sgt) cout << _ << ' ';
    cout << endl;
    for(auto _ : arr) cout << _ << ' ';
    cout << endl;
    int x = query(1, 0, n-1, 0, 8);
    cout << x << endl;
    // update(1, 0, n-1, 2, 50);
    // cout << query(1, 0, n-1, 0, 3) << endl;
}

signed main()
{
ios::sync_with_stdio(false);
cout.tie(0); cin.tie(0);
int t = 1;
// cin >> t;
while(t--)
{
solve();
}

return 0;
}