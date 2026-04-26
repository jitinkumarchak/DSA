#include <iostream>
#include <vector>
#include <queue>
#include <list>
#include <stack>
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

    void DFS(int curr, vector<bool> &vis, stack<int> &s)
    {
        vis[curr] = true;

        for (int v : l[curr])
        {
            if (!vis[v])
            {
                DFS(v, vis, s);
            }
        }
        s.push(curr);
    }

    void TopoSort()
    {
        vector<bool> vis(V, false);
        stack<int> s;

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                DFS(i, vis, s);
            }
        }

        while (s.size() > 0)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }
};

int main()
{
    Graph g(6);

    g.AddEdge(3,1);
    g.AddEdge(5,0);
    g.AddEdge(4,0);
    g.AddEdge(5,2);
    g.AddEdge(2,3);
    g.AddEdge(4,1);

    g.TopoSort();
    return 0;
}