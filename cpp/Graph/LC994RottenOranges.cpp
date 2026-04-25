#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int rottenTomatoes(vector<vector<int>> &grid, int n, int m, int ans)
{
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    queue<pair<pair<int, int>, int>> q; // {{i,j}, time};

    // pushing all sources in the queue
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                q.push({{i, j}, 0});
                vis[i][j] = true;
            }
        }
    }

    // bfs
    while (q.size() > 0)
    {
        int i = q.front().first.first;
        int j = q.front().first.second;
        int time = q.front().second;
        q.pop();

        ans = max(ans, time);

        if (i - 1 >= 0 && grid[i - 1][j] == 1 && !vis[i - 1][j]) // top
        {
            q.push({{i - 1, j}, time + 1});
            vis[i-1][j] = true;
        }
        if (j + 1 < m && grid[i][j + 1] == 1 && !vis[i][j + 1]) // right
        {
            q.push({{i, j + 1}, time + 1});
            vis[i][j+1] = true;
        }
        if (i + 1 < n && grid[i + 1][j] == 1 && !vis[i + 1][j]) // bottom
        {
            q.push({{i + 1, j}, time + 1});
            vis[i+1][j] = true;
        }
        if (j - 1 >= 0 && grid[i][j - 1] == 1 && !vis[i][j - 1]) // left
        {
            q.push({{i, j - 1}, time + 1});
            vis[i][j-1] = true;
        }
    }

    // check for fresh Oranges
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1 && !vis[i][j])
            {
                return -1;
            }
        }
    }
    return ans;
}

int main()
{
    vector<vector<int>> grid = {{2, 1, 1, 0, 0},
                                {1, 1, 1, 0, 0},
                                {1, 1, 1, 0, 0},
                                {1, 1, 1, 0, 0}};

    int n = grid.size();
    int m = grid[0].size();
    int ans = 0;

    cout << rottenTomatoes(grid, n, m, ans) << " ";

    return 0;
}