#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {5, 2, 1, 1, 6, 7, 8};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == 0 || arr[i] != arr[i - 1])
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}