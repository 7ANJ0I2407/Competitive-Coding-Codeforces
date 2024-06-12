#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
#include<deque>
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pp pop_back
#define ll long long
#define ld long double
#define int long long
#define pair pair<int,int>
typedef vector<ll> vi;
#define forall(i,n,x) for(int i=0; i<n; i+=x)
#define all(x) x.begin(), x.end()
#define all(x) x.begin(), x.end()
#pragma GCC optimize("O3")
#pragma GCC target("avx2")

// Function to calculate the size of largest connected component if row r is set to '#'
int calculateSizeIfRowSetToHash(vector<vector<char>>& grid, int r) {
    // Set all cells in row r to '#'
    for (int c = 0; c < grid[0].size(); ++c) {
        grid[r][c] = '#';
    }

    // Calculate the size of largest connected component
    return calculateLargestConnectedComponentSize(grid);
}

// Function to calculate the size of largest connected component if column c is set to '#'
int calculateSizeIfColumnSetToHash(vector<vector<char>>& grid, int c) {
    // Set all cells in column c to '#'
    for (int r = 0; r < grid.size(); ++r) {
        grid[r][c] = '#';
    }

    // Calculate the size of largest connected component
    return calculateLargestConnectedComponentSize(grid);
}

// Function to calculate the size of largest connected component in the grid
int calculateLargestConnectedComponentSize(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int max_size = 0;

    // DFS function to explore the connected component
    function<int(int, int)> dfs = [&](int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != '#' || visited[i][j])
            return 0;
        
        visited[i][j] = true;
        int size = 1;

        size += dfs(i - 1, j); // up
        size += dfs(i + 1, j); // down
        size += dfs(i, j - 1); // left
        size += dfs(i, j + 1); // right

        return size;
    };

    // Iterate through each cell
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '#' && !visited[i][j]) {
                int component_size = dfs(i, j);
                max_size = max(max_size, component_size);
            }
        }
    }

    return max_size;
}

// Function to find the maximum possible size of the largest connected component
int findMaximumConnectedComponentSize(vector<vector<char>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int max_size = 0;

    // Scenario 1: Setting all cells in a row to '#'
    for (int r = 0; r < n; ++r) {
        int size = calculateSizeIfRowSetToHash(grid, r);
        max_size = max(max_size, size);
    }

    // Scenario 2: Setting all cells in a column to '#'
    for (int c = 0; c < m; ++c) {
        int size = calculateSizeIfColumnSetToHash(grid, c);
        max_size = max(max_size, size);
    }

    // Calculate the size of largest connected component in the original grid
    int original_size = calculateLargestConnectedComponentSize(grid);
    max_size = max(max_size, original_size);

    return max_size;
}

signed main() {
    ios::sync_with_stdio(false);
    cout.tie(0); cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
            }
        }

        int max_connected_component_size = findMaximumConnectedComponentSize(grid);
        cout << "Maximum possible size of largest connected component: " << max_connected_component_size << endl;
    }

    return 0;
}
