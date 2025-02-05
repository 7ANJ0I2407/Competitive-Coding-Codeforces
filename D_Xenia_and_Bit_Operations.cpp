#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long
#define vi vector<ll>
#define all(x) x.begin(), x.end()

template<typename Node, typename Update>
struct SegTree {
    vector<Node> tree;
    vector<ll> arr;
    int n;
    int s;
    int p;
    SegTree(int a_len, vector<ll> &a) {
        arr = a;
        n = a_len;
        s = 4 * n;  // Segment tree size
        p = (int)log2(n) % 2; // Determine root operation (OR or XOR)
        tree.resize(s, Node());
        build(0, n - 1, 1, p);
    }
    void build(int start, int end, int index, int p) {
        if (start == end) {
            tree[index] = Node(arr[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * index, 1 - p);
        build(mid + 1, end, 2 * index + 1, 1 - p);
        tree[index].merge(tree[2 * index], tree[2 * index + 1], p);
    }
    void update(int start, int end, int index, int query_index, Update &u, int p) {
        if (start == end) {
            u.apply(tree[index]);
            return;
        }
        int mid = (start + end) / 2;
        if (mid >= query_index)
            update(start, mid, 2 * index, query_index, u, 1 - p);
        else
            update(mid + 1, end, 2 * index + 1, query_index, u, 1 - p);
        tree[index].merge(tree[2 * index], tree[2 * index + 1], p);
    }
    Node query(int start, int end, int index, int left, int right) {
        if (start > right || end < left)
            return Node();
        if (start >= left && end <= right)
            return tree[index];
        int mid = (start + end) / 2;
        Node l, r, ans;
        l = query(start, mid, 2 * index, left, right);
        r = query(mid + 1, end, 2 * index + 1, left, right);
        ans.merge(l, r, p);
        return ans;
    }
    void make_update(int index, ll val) {
        Update new_update = Update(val);
        update(0, n - 1, 1, index, new_update, p);
    }
    Node make_query(int left, int right) {
        return query(0, n - 1, 1, left, right);
    }
};

struct Node1 {
    ll val;
    Node1() { val = 0; }
    Node1(ll p1) { val = p1; }
    void merge(Node1 &l, Node1 &r, int p) {
        if (p) val = l.val | r.val;
        else val = l.val ^ r.val;
    }
};

struct Update1 {
    ll val;
    Update1(ll p1) { val = p1; }
    void apply(Node1 &a) { a.val = val; }
};

void solve() {
    int n, m;
    cin >> n >> m;
    n = 1 << n; // 2^n elements
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    SegTree<Node1, Update1> st(n, a);
    for (int i = 0; i < m; i++) {
        int p, b;
        cin >> p >> b;
        st.make_update(p - 1, b); // Update index p-1
        cout << st.arr[0] << endl; // Query the root
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
