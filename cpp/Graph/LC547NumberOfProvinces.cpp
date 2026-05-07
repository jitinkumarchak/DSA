#include <iostream>
#include <vector>
using namespace std;

void dfs(int i, vector<vector<int>> adj, vector<bool> vis)
{
    vis[i] = true;
    int n = adj[i].size();

    for (int j = 0; j < n; j++)
    {
        if (adj[i][j] == 1 && !vis[j])
        {
            dfs(j, adj, vis);
        }
    }
}

int main()
{
    vector<vector<int>> isConnected = {{1, 1, 0, 0}, {1, 1, 0, 0}, {0, 0, 1, 1}, {0, 0, 1, 1}};
    int n = isConnected.size();

    vector<bool> vis(n, false);

    int NoOfProvinces = 0;

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i, isConnected, vis);
            NoOfProvinces++;
        }
    }

    cout << NoOfProvinces;
    return 0;
}