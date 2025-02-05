#include <iostream>
#include <vector>
#include <climits>
using namespace std;

#define pb push_back
#define ll long long
#define vi vector<ll>
#define int long long

vector<int> sgt, lazy;
vi arr;

// Function to propagate lazy values to child nodes
void propagate(int index, int start, int end)
{
    if (lazy[index] != 0) 
    {
        sgt[index] += lazy[index];
        if (start != end) 
        {
            lazy[2 * index] += lazy[index];
            lazy[2 * index + 1] += lazy[index];
        }
        lazy[index] = 0;
    }
}

// Function to merge two values (for range minimum queries)
int merge(int a, int b)
{
    return min(a, b);
}

// Update function with lazy propagation
void update(int index, int start, int end, int l, int r, int val)
{
    propagate(index, start, end);

    // No overlap
    if (start > r || end < l) 
        return;

    // Complete overlap
    if (start >= l && end <= r) 
    {
        lazy[index] += val;
        propagate(index, start, end);
        return;
    }

    // Partial overlap
    int mid = (start + end) / 2;
    update(2 * index, start, mid, l, r, val);
    update(2 * index + 1, mid + 1, end, l, r, val);
    sgt[index] = merge(sgt[2 * index], sgt[2 * index + 1]);
}

// Query function with lazy propagation
int query(int index, int start, int end, int l, int r)
{
    propagate(index, start, end);

    // No overlap
    if (start > r || end < l) 
        return LLONG_MAX;

    // Complete overlap
    if (start >= l && end <= r) 
        return sgt[index];

    // Partial overlap
    int mid = (start + end) / 2;
    int left = query(2 * index, start, mid, l, r);
    int right = query(2 * index + 1, mid + 1, end, l, r);
    return merge(left, right);
}

// Build segment tree from the input array
void buildTree(int index, int start, int end)
{
    if (start == end) 
    {
        sgt[index] = arr[start];
        return;
    }
    int mid = (start + end) / 2;
    buildTree(2 * index, start, mid);
    buildTree(2 * index + 1, mid + 1, end);
    sgt[index] = merge(sgt[2 * index], sgt[2 * index + 1]);
}

// Solve function to handle input and perform operations
void solve()
{
    int n;
    cin >> n;

    sgt.assign(4 * n, LLONG_MAX); // Segment tree initialized for range minimum
    lazy.assign(4 * n, 0);        // Lazy tree initialized to zero
    arr.resize(n);

    for (auto &x : arr) cin >> x;

    buildTree(1, 0, n - 1); // Build the segment tree

    int q; // Number of queries
    cin >> q;

    while (q--) 
    {
        int type, l, r, val;
        cin >> type; // 1 for query, 2 for update
        if (type == 1) 
        {
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r) << endl;
        } 
        else if (type == 2) 
        {
            cin >> l >> r >> val;
            update(1, 0, n - 1, l, r, val);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    int t = 1; // Number of test cases
    // cin >> t;

    while (t--) 
    {
        solve();
    }

    return 0;
}
