#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 8, 9, 3, 66};

    int maxele = arr[0];

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > maxele)
        {
            maxele = arr[i];
        }
        }
    cout << maxele;
    return 0;
}