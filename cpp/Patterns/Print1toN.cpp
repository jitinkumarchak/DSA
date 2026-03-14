#include <iostream>
using namespace std;

int main()
{
 //123 pattern
    // int n = 3;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // cout << num;

//ABC pattern 

    int n = 3;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}