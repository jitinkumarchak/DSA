#include <iostream>
#include <vector>
using namespace std;

int SpiralMatrix(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
    vector<int> ans;

    while (srow <= erow && scol <= ecol)
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            ans.push_back(mat[srow][j]);
        }

        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            ans.push_back(mat[i][ecol]);
        }

        // bottom
        for (int j = ecol - 1; j > scol; j--)
        {
            if (srow == erow)
            {
                break;
            }
            ans.push_back(mat[erow][j]);
        }

        // left
        for (int i = erow - 1; i > srow; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            ans.push_back(mat[i][scol]);
        }
        srow++;
        scol++;
        erow--;
        ecol--;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<vector<int>> mat = {
        {1, 3, 5, 7},
        {8, 9, 10, 12},
        {15, 18, 20, 25}};

    cout << SpiralMatrix(mat);

    return 0;
}