#include <iostream>
#include <vector>
using namespace std;

int recbinarysearch(vector<int> &arr, int tar, int s, int e)
{
    int mid = s + (e - s) / 2;

    if (tar == arr[mid])
    {
        return mid;
    }
    else if (tar > arr[mid])
    {
        return recbinarysearch(arr, tar, mid + 1, e);
    }
    else
    {
        return recbinarysearch(arr, tar, s, mid - 1);
    }
    return mid;
}

int main()
{
    vector<int> arr = {1, 3, 6, 9, 12};
    int tar = 6;
    int n = arr.size();
    int s = 0;
    int e = n - 1;

    cout << recbinarysearch(arr, tar, s, e);
    return 0;
}