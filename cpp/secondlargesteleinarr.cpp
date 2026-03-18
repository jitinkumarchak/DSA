#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 6, 8, 55, 3, 66};

    int largest = arr[0];
    int secondlargest = arr[0];

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    cout << secondlargest << " " << largest;
    return 0;
}