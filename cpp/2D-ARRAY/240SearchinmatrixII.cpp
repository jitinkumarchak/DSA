#include <iostream>
#include <vector>
using namespace std;

int searchinmatrixII(vector<vector<int>> &mat, int tar)
{
    int m = mat.size(), n = mat[0].size();

    int r = 0, c = n - 1;

    while (r < m && c >= 0)
    {
        if (tar == mat[r][c])
        {
            return true;
        }
        else if (tar > mat[r][c])
        {
            r++;
        }
        else
        {
            c--;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> mat = {{1, 3, 5, 7}, {8, 9, 10, 12}, {15, 18, 20, 25}};
    int tar = 18;

    cout << searchinmatrixII(mat, tar);

    return 0;
}