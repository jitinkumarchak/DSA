#include <iostream>
using namespace std;

void reversearr(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    for (int i = 0; i < right; i++)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}
int main()
{
    int size = 6;
    int arr[size] = {1,2,3,4,5,6};

     reversearr(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}