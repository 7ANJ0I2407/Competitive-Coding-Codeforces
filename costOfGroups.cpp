#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define pb push_back
typedef vector<long long> vi;

bool check(int start, vector<vector<int> > &graph, vector<int> &color)
{
    queue<int> q;
    q.push(start);
    color[start] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto adjNode : graph[node])
        {
            if (color[adjNode] == -1)
            {
                color[adjNode] = !color[node];
                q.push(adjNode);
            }
            else if (color[adjNode] == color[node])
            {
                return false;
            }
        }
    }
    return true;
}

int isBipartite(vector<vector<int> > &graph, vector<int> &cost)
{
    int n = graph.size() - 1;
    vector<int> color(n + 1, -1);
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == -1)
        {
            if (!check(i, graph, color))
                return 0;
        }
    }
    vector<int> part1, part2;
    for (int i = 1; i <= n; i++)
    {
        if (color[i] == 0)
        {
            part1.push_back(cost[i]);
        }
        else
        {
            part2.push_back(cost[i]);
        }
    }
    if (part1.empty() || part2.empty())
        return 0;
    for(auto m : part1) cout << m  << " ";
    cout << endl;
    for(auto m : part2) cout << m  << " ";
    cout << endl;


    sort(part1.begin(), part1.end());
    sort(part2.begin(), part2.end());
    int ans = abs(part1.front() - part1.back()) + abs(part2.front() - part2.back());
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> cost(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> cost[i];
    }
    vector<vector<int> > graph(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    cout << isBipartite(graph, cost) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
