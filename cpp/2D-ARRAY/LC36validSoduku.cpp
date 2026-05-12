#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{

    vector<vector<char>> board =
        {{'5', '3', '.', '.', '7', '.', '.', '.', '.'}, {'6', '.', '.', '1', '9', '5', '.', '.', '.'}, {'.', '9', '8', '.', '.', '.', '.', '6', '.'}, {'8', '.', '.', '.', '6', '.', '.', '.', '3'}, {'4', '.', '.', '8', '.', '3', '.', '.', '1'}, {'7', '.', '.', '.', '2', '.', '.', '.', '6'}, {'.', '6', '.', '.', '.', '.', '2', '8', '.'}, {'.', '.', '.', '4', '1', '9', '.', '.', '5'}, {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    unordered_set<string> seen;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {

            char num = board[i][j];

            if (num == '.')
                continue;

            string row = string(1, num) + "row" + to_string(i);
            string col = string(1, num) + "col" + to_string(j);
            string box = string(1, num) + "box" + to_string((i / 3) * 3 + (j / 3));

            if (seen.count(row) || seen.count(col) || seen.count(box))
            {
                cout << "Invalid\n";
                return 0;
            }

            seen.insert(row);
            seen.insert(col);
            seen.insert(box);
        }
    }
    cout << "Valid\n";
    return 0;
}