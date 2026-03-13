#include <iostream>
using namespace std;
int main()
{
    // while loop

    // int n = 80;
    // int count = 0;     // initialization
    // while (count <= n) //  condition
    // {
    //     cout << count << " ";
    //     count++; // increment
    // }

    // for Loop

    // int n = 5;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum ;
    // cout << endl;

    // int n = 5;
    // int sum = 0;
    // int i = 0;
    // while (i <= n)
    // {
    //     sum = sum + i;
    //     i++;
    // }
    // cout << sum;

    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* " ;
        }
        cout << endl;
    }
    return 0;
}