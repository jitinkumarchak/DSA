#include <iostream>
#include <vector>
using namespace std;

bool dfs(vector<vector<char>> &board, string word, int i, int j, int k)
{
    if (k == word.length())
    {
        return true;
    }
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[k])
    {
        return false;
    }
    char temp = board[i][j];
    board[i][j] = '#'; // Mark as visited
    bool found = dfs(board, word, i + 1, j, k + 1) ||
                 dfs(board, word, i - 1, j, k + 1) ||
                 dfs(board, word, i, j + 1, k + 1) ||
                 dfs(board, word, i, j - 1, k + 1);
    board[i][j] = temp; // Restore the character
    return found;
}

bool exist(vector<vector<char>> &board, string word)
{
    int m = board.size();
    int n = board[0].size();

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == word[0])
            {
                // Call a helper function to perform DFS
                if (dfs(board, word, i, j, 0))
                {
                    return true;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<char>> board = {
        {'A', 'B', 'C', 'E'},
        {'S', 'F', 'C', 'S'},
        {'A', 'D', 'E', 'E'}};

    string word = "AECCED";

    cout << exist(board, word) << endl; // Output: true

    return 0;
}