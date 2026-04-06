#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &nums, int st, int end, int mid)
{
    vector<int> temp;

    int i = st, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (nums[i] < nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(nums[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(nums[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)
    {
        nums[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &nums, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        mergeSort(nums, st, mid);      // left half
        mergeSort(nums, mid + 1, end); // right half

        merge(nums, st, end, mid);
    }
}
int main()
{
    vector<int> nums = {2, 1, 6, 5, 4, 3};
    mergeSort(nums, 0, nums.size() - 1);

    for (int val : nums)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
