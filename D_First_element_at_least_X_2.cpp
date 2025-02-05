#include <iostream>
#include <vector>
#include <climits>
using namespace std;
#define ll long long
#define vi vector<ll>
#define all(x) x.begin(), x.end()

template<typename Node, typename Update>
struct SegTree {
    vector<Node> tree;
    vector<ll> arr;
    int n, s;
    SegTree(int a_len, vector<ll> &a) {
        arr = a;
        n = a_len;
        s = 1;
        while (s < 2 * n) {
            s = s << 1;
        }
        tree.resize(s); 
        fill(all(tree), Node());
        build(0, n - 1, 1);
    }
    void build(int start, int end, int index) {
        if (start == end) {
            tree[index] = Node(arr[start], start);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * index);
        build(mid + 1, end, 2 * index + 1);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    void update(int start, int end, int index, int query_index, Update &u) {
        if (start == end) {
            u.apply(tree[index]);
            return;
        }
        int mid = (start + end) / 2;
        if (mid >= query_index)
            update(start, mid, 2 * index, query_index, u);
        else
            update(mid + 1, end, 2 * index + 1, query_index, u);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    int findMin(int start, int end, int index, int l, int x) {
        if (end < l || tree[index].val < x) return -1;
        if (start == end) return tree[index].idx;
        int mid = (start + end) / 2;
        int res = findMin(start, mid, 2 * index, l, x);
        if (res != -1) return res;
        return findMin(mid + 1, end, 2 * index + 1, l, x);
    }
    int findMin(int l, int x) {
        return findMin(0, n - 1, 1, l, x);
    }
    void make_update(int index, ll val) {
        Update new_update = Update(val);
        update(0, n - 1, 1, index, new_update);
    }
};

struct Node1 {
    ll val;
    int idx;
    Node1() {
        val = LLONG_MIN;
        idx = -1;
    }
    Node1(ll p1, ll index) {
        val = p1;
        idx = index;
    }
    void merge(Node1 &l, Node1 &r) {
        if (l.val >= r.val) {
            val = l.val;
            idx = l.idx;
        } else {
            val = r.val;
            idx = r.idx;
        }
    }
};

struct Update1 {
    ll val;
    Update1(ll p1) { val = p1; }
    void apply(Node1 &a) { a.val = val; }
};

void solve() {
    int n, q;
    cin >> n >> q;
    vi a(n);
    for (auto &i : a) cin >> i;
    SegTree<Node1, Update1> seg(n, a);
    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;
        if (x == 1) {
            seg.make_update(y, z);
        } else {
            cout << seg.findMin(y, z) << endl;
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
