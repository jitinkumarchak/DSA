#include <iostream>
#include <vector>
using namespace std;

bool searchinRow(vector<vector<int>> &mat, int tar, int midrow)
{
    int n = mat[0].size();
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar == mat[midrow][mid])
        {
            return true;
        }
        else if (tar >= mat[midrow][mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

bool searchinMat(vector<vector<int>> &mat, int tar)
{
    int m = mat.size(), n = mat[0].size();

    int strow = 0, endrow = m - 1;

    while (strow <= endrow)
    {
        int midrow = strow + (endrow - strow) / 2;

        if (tar >= mat[midrow][0] && tar <= mat[midrow][n - 1])
        {
            return searchinRow(mat, tar, midrow);
        }
        else if (tar >= mat[midrow][n - 1])
        {
            strow = midrow + 1;
        }
        else
        {
            endrow = midrow - 1;
        }
    }
    return 0;
}

int main()
{
    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int tar = 10;

    cout << searchinMat(mat, tar);

    return 0;
}