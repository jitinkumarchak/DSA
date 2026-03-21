#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {13, 94, 11, 41, 995};
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
       
    }

     swap(smallest,largest);

    cout << "smallest element is:" << smallest << endl;
    cout << "largest element is: " << largest << endl;
    return 0;
}