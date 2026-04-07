#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &nums, int st, int end)
{
    int idx = st - 1, pivot = nums[end];

    for (int j = st; j < end; j++)
    {
        if (nums[j] <= pivot)
        {
            idx++;
            swap(nums[j], nums[idx]);
        }
    }

    idx++;
    swap(nums[end], nums[idx]);
    return idx;
}

void QuickSort(vector<int> &nums, int st, int end)
{
    if (st < end)
    {
        int pvtidx = partition(nums, st, end);
        QuickSort(nums, st, pvtidx - 1);  // left half
        QuickSort(nums, pvtidx + 1, end); // right half
    }
}

int main()
{
    vector<int> nums = {2, 1, 6, 5, 4, 3};
    QuickSort(nums, 0, nums.size() - 1);

    for(int val : nums){
        cout  << val  << " ";
    }
    cout << endl;
    return 0;
}