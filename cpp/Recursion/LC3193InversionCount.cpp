#include <iostream>
#include <vector>
using namespace std;

int inversioncount(vector<int> &nums, int st, int mid, int end)
{
    vector<int> temp;
    int i = st, j = mid + 1;
    int invcount = 0;

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
            invcount += (mid - i + 1);
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

    return invcount;
}

int mergesort(vector<int> &nums, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        int leftinvcount = mergesort(nums, st, mid);
        int rightinvcount = mergesort(nums, mid + 1, end);

        int invcount = inversioncount(nums, st, mid, end);

        return leftinvcount + rightinvcount + invcount;
    }
    return 0;
}

int main()
{
    vector<int> nums = {6, 3, 5, 2, 7};

    int ans = mergesort(nums, 0, nums.size() - 1);
    cout << "invcount:" << ans << endl;

    return 0;
}