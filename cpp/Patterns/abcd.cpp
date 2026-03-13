#include <iostream>
using namespace std;

int main()
{

    int n = 4;

    for (int i = 0; i < n; i++)
    { // oute loop  deals with no of lines
        char ch = 'A';
        for (int j = 0; j < n; j++)
        { // inner loop deals with no of columns in each line
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}