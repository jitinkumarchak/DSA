#include <iostream>
#include <vector>
using namespace std;

void dfs(int i, int j, vector<vector<bool>> &vis, vector<vector<char>> &grid, int n, int m)

{
    if (i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || grid[i][j] == '0')
    {
        return;
    }

    vis[i][j] = true;

    dfs(i - 1, j, vis, grid, n, m); // top
    dfs(i, j + 1, vis, grid, n, m); // right
    dfs(i + 1, j, vis, grid, n, m); // bottom
    dfs(i, j - 1, vis, grid, n, m); // left
}

int numisland(vector<vector<char>> &grid, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }

    int islands = 0;

    vector<vector<bool>> vis(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == '1' && !vis[i][j])
            {
                dfs(i, j, vis, grid, n, m); // 1 component visit
                islands++;
            }
        }
    }
    return islands;
};

int main()
{
    vector<vector<char>> grid = {{'1', '1', '0', '0', '0'},
                                 {'1', '1', '0', '0', '0'},
                                 {'0', '0', '0', '0', '0'},
                                 {'0', '0', '0', '1', '1'}};
    int n = grid.size();
    int m = grid[0].size();

    int ans = numisland(grid, n, m);
    cout << ans << " ";

    return 0;
}