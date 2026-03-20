#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum << endl;
    return 0;
}

int product(int arr[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product = product * arr[i];
    }
    cout << product << endl;
    return 0;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};

    sum(arr, size);
    product(arr, size);
    return 0;
}