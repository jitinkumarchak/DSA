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

    void TopoSort() // O(V+E);
    {
        vector<int> res;

        // calc indegree
        vector<int> indeg(V, 0);

        for (int u = 0; u < V; u++)
        {
            for (int v : l[u])
            {
                indeg[v]++;
            }
        }

        // 0 indeg  ==> 0

        queue<int> q;

        for (int i = 0; i < V; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
            }
        }

        // bfs

        while (q.size() > 0)
        {
            int curr = q.front();
            q.pop();
            res.push_back(curr);

            for (int v : l[curr])
            {
                indeg[v]--;
                if (indeg[v] == 0)
                {
                    q.push(v);
                }
            }
        }

        // result

        for (int val : res)
        {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main()
{
    Graph g(6);

    g.AddEdge(5, 0);
    g.AddEdge(4, 0);
    g.AddEdge(5, 2);
    g.AddEdge(2, 3);
    g.AddEdge(4, 1);
    g.AddEdge(3, 1);

    g.TopoSort();

       return 0;
}