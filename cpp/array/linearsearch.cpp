#include <iostream>
using namespace std;

int linearsearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 30;

    int index = linearsearch(arr, size, target);
    cout << index;
    return 0;
}