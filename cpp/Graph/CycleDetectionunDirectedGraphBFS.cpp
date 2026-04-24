#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class Graph
{

    int V;
    list<int> *l; // int * arr;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V]; // arr = new int[V];
    }

    void AddEdge(int u, int v)
    {
        l[u].push_back(v);
        l[v].push_back(u);
    }

    bool isCycledetectionunDirectedBFS(int src, vector<bool> &vis) // O (V + E)
    {
        queue<pair<int, int>> q;
        q.push({src, -1});
        vis[src] = true;

        while (q.size() > 0)
        {
            int u = q.front().first;
            int parU = q.front().second;
            q.pop();

            list<int> neighbours = l[u];
            for (int v : neighbours)
            {
                if (!vis[v])
                {
                    q.push({v, u});
                    vis[v] = true;
                }
                else if (v != parU)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle()
    {
        vector<bool> vis(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (isCycledetectionunDirectedBFS(i, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Graph g(5);

    g.AddEdge(0, 1);
    // g.AddEdge(0, 2);
    g.AddEdge(0, 3);
    g.AddEdge(1, 2);
    g.AddEdge(3, 4);

    cout << g.isCycle() << " ";
}