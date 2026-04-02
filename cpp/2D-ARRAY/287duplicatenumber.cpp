#include <iostream>
#include <vector>
using namespace std;

vector<int> dupnum(vector<int> &arr)
{
    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    cout << slow << endl;
    return {};
}

int main()
{
    vector<int> arr = {1, 3, 4, 3};

    dupnum(arr);

    return 0;
}