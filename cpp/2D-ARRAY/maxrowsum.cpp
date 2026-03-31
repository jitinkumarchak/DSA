#include <iostream>
using namespace std;

int maxRowSum(int matrix[3][3], int rows, int cols)
{
    int maxRowSum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int maxsum = 0;
        for (int j = 0; j < cols; j++)
        {
            maxsum += matrix[i][j]; // for maxcolsum matrix[j][i];
        }
        maxRowSum = max(maxRowSum, maxsum);
    }
    return maxRowSum;
}
int main()
{
    int matrix[3][3] = {{11, 22, 8}, {11, 45, 6}, {11, 67, 8}};
    int rows = 3;
    int cols = 3;
    cout << maxRowSum(matrix, rows, cols);
    return 0;
}