#include <iostream>
using namespace std;

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 4;
    int cols = 3;
    int key = 10;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == key)
            {
                cout << true;
            }
        }
    }
    cout << false;
    return 0;
}