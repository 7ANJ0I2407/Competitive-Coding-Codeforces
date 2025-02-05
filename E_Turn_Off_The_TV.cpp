#include<iostream>
#include <bits/stdc++.h>
#include<set>
#include<map>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
typedef vector<ll> vi;
typedef vector<vi> vvi;
#define forall(i,n,x) for(int i = 0; i < n; i += x)
#define forall1(m,n,x) for(int i = m; i < n; i += x)
#define forall2(i,n,x) for(int i = m; i <= n; i += x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")


template<typename Node, typename Update>
struct SegTree {
	vector<Node> tree;
	vector<ll> arr; // type may change
	int n;
	int s;
	SegTree(int a_len, vector<ll> &a) { // change if type updated
		arr = a;
		n = a_len;
		s = 1;
		while(s < 2 * n){
			s = s << 1;
		}
		tree.resize(s); fill(all(tree), Node());
		build(0, n - 1, 1);
	}
	void build(int start, int end, int index)  // Never change this
	{
		if (start == end)	{
			tree[index] = Node(arr[start], start);
			return;
		}
		int mid = (start + end) / 2;
		build(start, mid, 2 * index);
		build(mid + 1, end, 2 * index + 1);
		tree[index].merge(tree[2 * index], tree[2 * index + 1]);
	}
	void update(int start, int end, int index, int query_index, Update &u)  // Never Change this
	{
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
	Node query(int start, int end, int index, int left, int right) { // Never change this
		if (start > right || end < left)
			return Node();
		if (start >= left && end <= right)
			return tree[index];
		int mid = (start + end) / 2;
		Node l, r, ans;
		l = query(start, mid, 2 * index, left, right);
		r = query(mid + 1, end, 2 * index + 1, left, right);
		ans.merge(l, r);
		return ans;
	}
	void make_update(int index, ll val) {  // pass in as many parameters as required
		Update new_update = Update(val); // may change
		update(0, n - 1, 1, index, new_update);
	}
	Node make_query(int left, int right) {
		return query(0, n - 1, 1, left, right);
	}
};

struct Node1 {
	ll val; // may change
    ll idx;
	Node1() { // Identity element
		val = INT_MAX;	// may change
        // idx = -1;
	}
	Node1(ll p1, ll index) {  // Actual Node
		val = p1; // may change
        // idx = index;
	}
	void merge(Node1 &l, Node1 &r) { // Merge two child nodes
		val = min(l.val, r.val); // may change
	}
};

struct Update1 {
	ll val; // may change
	Update1(ll p1) { // Actual Update
		val = p1; // may change
	}
	void apply(Node1 &a) { // apply update to given node
		a.val = val; // may change
	}
};

const int N = 1e5 + 5;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int> > intervals(n);
    set<int> points;
 
    for (int i = 0; i < n; i++) {
        cin >> intervals[i].first >> intervals[i].second;
        points.insert(intervals[i].first);
        points.insert(intervals[i].second);
        points.insert(intervals[i].second + 1);
    }
 
    // Coordinate compression
    map<int, int> compressed;
    int idx = 0;
    for (int p : points) {
        compressed[p] = idx++;
    }
 
    // Update intervals with compressed coordinates
    vector<int> coverage(idx, 0);
    for (auto &interval : intervals) {
        int l = compressed[interval.first];
        int r = compressed[interval.second];
        coverage[l]++;
        if (r + 1 < idx) coverage[r + 1]--;
        interval.first = l;
        interval.second = r;
    }
 
    // Compute prefix sum
    for (int i = 1; i < idx; i++) {
        coverage[i] += coverage[i - 1];
    }
 
    // Initialize segment tree
    SegTree<Node1, Update1> segTree(idx, coverage);
 
    // Check for redundant TV set
    for (int i = 0; i < n; i++) {
        int l = intervals[i].first, r = intervals[i].second;
        if (segTree.make_query(l, r).val > 1) {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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