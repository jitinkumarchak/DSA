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
    }

    bool iscycleDirDFS(int curr, vector<bool> &vis, vector<bool> &recpath)
    {
        vis[curr] = true;
        recpath[curr] = true;

        for (int v : l[curr])
        {
            if (!vis[v])
            {
                if (iscycleDirDFS(v, vis, recpath))
                {
                    return true;
                }
            }
            else if (recpath[v])
            {
                return true;
            }
        }

        recpath[curr] = false;
        return false;
    }

    bool iscycle()
    {
        vector<bool> vis(V, false);
        vector<bool> recpath(V, false);

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if (iscycleDirDFS(i, vis, recpath))
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
    Graph g(4);

    g.AddEdge(1, 0);
    g.AddEdge(0, 2);
    g.AddEdge(2, 3);
    g.AddEdge(1, 3);

    cout << (g.iscycle() ? 1 : 0) << "\n";

    return 0;
}