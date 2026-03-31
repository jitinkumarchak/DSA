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

int diagonalsum(int matrix[3][3], int n)
{
    int diagonalsum = 0;

    for (int i = 0; i < n; i++)
    {
        // for (int j = 0; j < n; j++)
        //     if (i == j)
        //     {
        //         diagonalsum += matrix[i][j]; // primary diagonal
        //     }
        //     else if (j == n - i - 1)
        //     {
        //         diagonalsum += matrix[i][j]; // secondary diagonal
        //     }
        diagonalsum += matrix[i][i];
        if(i != n-i-1){
            diagonalsum += matrix[i][n-i-1];
        }
    }
    return diagonalsum;
}
int main()
{
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int n =3;
    cout << diagonalsum(matrix, n);
    return 0;
}