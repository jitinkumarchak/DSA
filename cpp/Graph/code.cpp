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

    void PrintADJList()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << " : ";
            for (int neigh : l[i])
            {
                cout << neigh << " ";
            }
            cout << endl;
        }
    }

    // BFS traversal
    void BFS() // O(V+E);
    {
        queue<int> q;
        vector<bool> vis(V, false);

        q.push(0);
        vis[0] = true;

        while (q.size() > 0)
        {
            int u = q.front();
            q.pop();

            cout << u << " ";

            for (int v : l[u]) // imeadiate neighbour

            {
                if (!vis[v])
                {
                    vis[v] = true;
                    q.push(v);
                }
            }
        }

        cout << endl;
    }
    // DFS traversal

    void DFShelper(int u, vector<bool> &vis)
    {
        cout << u << " ";
        vis[u] = true;

        for (int v : l[u])
        {
            if (!vis[v])
            {
                DFShelper(v, vis);
            }
        }
    }

    void dfs() // O(V+E)
    {
        int src = 0;
        vector<bool> vis(V, false);

        DFShelper(src, vis);
        cout << endl;
    }

    bool isCycleUndirected(int src, int par, vector<bool> &vis) // O(V + E)
    {
        vis[src] = true;

        list<int> neighbours = l[src];

        for (int v : neighbours)
        {
            if (!vis[v])
            {
                isCycleUndirected(v, src, vis);
            }
            else if (v != par)
            {
                return true;
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
                if (isCycleUndirected(i, -1, vis))
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

    // g.BFS();
    // g.dfs();

    cout << g.isCycle() << endl;

    return 0;
}