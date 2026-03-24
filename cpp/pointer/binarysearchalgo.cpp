#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr, int tar)
{
    int st = 0;
    int end = arr.size() - 1;

    while (st <= end)
    {

        int mid = (st + end) / 2;

        if (tar > arr[mid])
        {
            st = mid + 1;
        }
        else if (tar < arr[mid])
        {
            end = mid - 1;
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

    vector<int> nums1 = {1, 2, 3, 4,5,7}; // odd arr;
    int tar = 7;

    cout << binarysearch(nums1, tar) << endl;

    vector<int> nums2 = {22,45,78,98,101}; // even arr;
    int tar2 = 45;

    cout << binarysearch(nums2, tar2) << endl;

    return 0;
}
