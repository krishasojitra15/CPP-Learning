#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class solution {
public:
    int time;
    vector<int> dt, low;

    void dfs(int u, int par,
             vector<bool>& vis,
             vector<vector<int>>& adj,
             vector<vector<int>>& bridges)
    {
        vis[u] = true;

        dt[u] = low[u] = ++time;

        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];

            if(!vis[v])
            {
                dfs(v, u, vis, adj, bridges);

                low[u] = min(low[u], low[v]);

                if(low[v] > dt[u])
                {
                    bridges.push_back({u, v});
                }
            }
            else if(v != par)
            {
                low[u] = min(low[u], dt[v]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections)
    {
        vector<vector<int>> adj(n);

        // Create adjacency list
        for(int i = 0; i < connections.size(); i++)
        {
            int u = connections[i][0];
            int v = connections[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        time = 0;

        vector<bool> vis(n, false);

        dt.resize(n, -1);
        low.resize(n);

        vector<vector<int>> bridges;

        // DFS for all components
        for(int i = 0; i < n; i++)
        {
            if(dt[i] == -1)
            {
                dfs(i, -1, vis, adj, bridges);
            }
        }

        return bridges;
    }
};