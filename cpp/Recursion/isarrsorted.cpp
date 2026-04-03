#include <iostream>
#include <vector>
using namespace std;

bool issorted(vector<int> &arr, int n) // tc = O(n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    return arr[n - 1] >= arr[n - 2] && issorted(arr, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 0, 4, 5};
    int n = 5;
    cout << issorted(arr, arr.size()) << endl;

    return 0;
}