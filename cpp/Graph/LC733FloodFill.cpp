#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<int>> &image, int i, int j, int newColor, int orgColor)
{
    int m = image.size();
    int n = image[0].size();

    if (i < 0 || j < 0 || i >= m || j >= n || image[i][j] == newColor || image[i][j] != orgColor)
    {
        return;
    }

    image[i][j] = newColor;

    DFS(image, i - 1, j, newColor, orgColor);
    DFS(image, i, j + 1, newColor, orgColor);
    DFS(image, i + 1, j, newColor, orgColor);
    DFS(image, i, j - 1, newColor, orgColor);
}

int main()
{
    vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
    int sr = 1;
    int sc = 1;
    int orgColor = image[sr][sc];
    int newColor = 2;
    int m = image.size();
    int n = image[0].size();

    if (orgColor != newColor)
    {
        DFS(image, sr, sc, newColor, orgColor);
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << image[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}