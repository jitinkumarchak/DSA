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
};

int main()
{
    Graph g(5);

    g.AddEdge(0, 1);
    g.AddEdge(1, 2);
    g.AddEdge(1, 3);
    g.AddEdge(2, 3);
    g.AddEdge(2, 4);

    g.BFS();

    return 0;
}