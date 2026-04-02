#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

vector<int> misingrepeatingvalue(vector<vector<int>> grid)
{
    vector<int> ans;
    int a, b;
    int n = grid.size();
    unordered_set<int> s;

    int expsum = 0, actualsum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            actualsum += grid[i][j];

            if (s.find(grid[i][j]) != s.end())
            {
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expsum = n * n * (n * n + 1) / 2;
    b = expsum + a - actualsum;
    ans.push_back(b);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return {};
}

int main()
{
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 5}, {6, 7, 8}};

    misingrepeatingvalue(grid);

    return 0;
}