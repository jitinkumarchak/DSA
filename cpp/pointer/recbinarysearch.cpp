#include <iostream>
#include <vector>
using namespace std;

int recbinarysearch(vector<int> arr, int tar, int st, int end)
{

    if (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (tar > arr[mid])
        {
            return recbinarysearch(arr, tar, mid + 1, end);
        }
        else if (tar < arr[mid])
        {
            return recbinarysearch(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    vector<int> nums1 = {1, 2, 3, 4, 5, 7}; // odd arr;
    int tar = 7;

    cout << recbinarysearch(nums1, tar, 0, nums1.size() - 1) << endl;

    vector<int> nums2 = {22, 45, 78, 98, 101}; // even arr;
    int tar2 = 45;

    cout << recbinarysearch(nums2, tar2, 0, nums2.size() - 1) << endl;

    return 0;
}