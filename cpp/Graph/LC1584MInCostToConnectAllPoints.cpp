#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{
};

int PrimMST(int V, vector<vector<pair<int, int>>> &adj)
{
    vector<bool> inMST(V, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int inMSTCost = 0;

    pq.push({0, 0});

    while (pq.size() > 0)
    {
        auto p = pq.top();
        int wt = p.first;
        int u = p.second;
        pq.pop();

        if (!inMST[u])
        {
            inMST[u] = true;
            inMSTCost += wt;

            for (int i = 0; i < adj[u].size(); i++)
            {
                int v = adj[u][i].first;
                int w = adj[u][i].second;

                if (!inMST[v])
                {
                    pq.push({w, v});
                }
            }
        }
    }

    return inMSTCost;
}

int main()
{
    vector<pair<int, int>> points = {{0, 0}, {2, 2}, {3, 10}, {5, 2}, {7, 0}};
    int V = points.size();

    vector<vector<pair<int, int>>> adj(V);

    for (int i = 0; i < V; i++)
    {
        for (int j = 1; j < V; j++)
        {
            int x1 = points[i].first;
            int y1 = points[i].second;
            int x2 = points[j].first;
            int y2 = points[j].second;
            int wt = abs(x1 - x2) + abs(y1 - y2);
            adj[i].push_back({j, wt});
            adj[j].push_back({i, wt});
        }
    }

    cout << " minimum cost of mst  : " << PrimMST(V, adj) << endl;

    return 0;
}
