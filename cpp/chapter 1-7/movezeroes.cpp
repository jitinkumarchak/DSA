#include <iostream>
#include <vector>
using namespace std;

void movezeroes(vector<int> &arr, int n)
{
    int j = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{

    vector<int> arr = {0, 12, 4, 0, 8};
    int n = 5;

    movezeroes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}