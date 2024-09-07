#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;

typedef long long ll;

ll difference_array[400005], prefix_sums[400005];
int widths[400005];
vector<int> indices;
pair<int, int> queries[100005];
pair<pair<int, int>, int> updates[100005];

int getCompressedIndex(int a) {
    return lower_bound(indices.begin(), indices.end(), a) - indices.begin();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, Q;
    cin >> N >> Q;

    for (int i = 0; i < N; i++) {
        int l, r, v;
        cin >> l >> r >> v;
        indices.push_back(l);
        indices.push_back(r);
        updates[i] = {{l, r}, v};
    }

    for (int i = 0; i < Q; i++) {
        int l, r;
        cin >> l >> r;
        indices.push_back(l);
        indices.push_back(r);
        queries[i] = {l, r};
    }

    sort(indices.begin(), indices.end());
    indices.erase(unique(indices.begin(), indices.end()), indices.end());

    for (int i = 0; i < N; i++) {
        auto a = updates[i];
        difference_array[getCompressedIndex(a.first.first) + 1] += a.second;
        difference_array[getCompressedIndex(a.first.second) + 1] -= a.second;
    }

    for (int i = 0; i < indices.size() - 1; i++) {
        widths[i + 1] = indices[i + 1] - indices[i];
    }

    for (int i = 1; i < indices.size(); i++) {
        difference_array[i] += difference_array[i - 1];
        prefix_sums[i] = prefix_sums[i - 1] + difference_array[i] * widths[i];
    }

    for (int i = 0; i < Q; i++) {
        cout << prefix_sums[getCompressedIndex(queries[i].second)] -
                    prefix_sums[getCompressedIndex(queries[i].first)]
             << endl;
    }

    return 0;
}
