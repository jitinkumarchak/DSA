#include <iostream>
using namespace std;

int main()
{ // int size  =5;
    int marks[5] = {90, 80, 10, 60, 50};
    int smallest = INT_MAX;

    for (int i = 0; i < sizeof(marks) / sizeof(int); i++) // i<size
    {
        if (marks[i] < smallest) // smallest  = min(smallest,marks[i]);
        {
            smallest = marks[i];
        }
    }
    cout << sizeof(smallest)  << endl;
    cout << "smallest element is : " << smallest << endl;
    return 0;
}