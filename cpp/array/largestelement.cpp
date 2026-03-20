#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int marks[5] = {90, 110, 10, 60, 50};
    int largest = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        largest = max(largest, marks[i]);
    }
    // cout << sizeof(largest) << endl ;
    cout << "largest element is : " << largest << endl;
    return 0;
}
