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

struct Rect {
	int x1, y1, x2, y2;
	int area() { return (y2 - y1) * (x2 - x1); }
};

int intersect(Rect p, Rect q) {
	int xOverlap = max(0ll, min(p.x2, q.x2) - max(p.x1, q.x1));
	int yOverlap = max(0ll, min(p.y2, q.y2) - max(p.y1, q.y1));
	return xOverlap * yOverlap;
}

void solve()
{
    Rect A, B, C;
    cin >> A.x1 >> A.y1 >> A.x2 >> A.y2;
    cin >> B.x1 >> B.y1 >> B.x2 >> B.y2;
    cin >> C.x1 >> C.y1 >> C.x2 >> C.y2;
    int area1 = A.area();
    int sec1 =max(0ll, intersect(A, B));
    int sec2 =max(0ll, intersect(A, C));
    int inter =max(0ll, intersect({ max(A.x1, B.x1), max(A.y1, B.y1), min(A.x2, B.x2), min(A.y2, B.y2) }, C));
    // cout << Area(B, C) << ' ' << Area(C, B) << endl;
    // cout << area1 << " " << sec1 << " " << sec2 << " " << inter << endl;    
    if(area1 > max(0ll, (sec1 + sec2 - inter)))cout << "YES" << endl;
    else cout << "NO" << endl;
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