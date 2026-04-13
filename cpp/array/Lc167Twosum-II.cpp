#include <iostream>
#include <vector>
using namespace std;

vector<int> twosum(vector<int> &nums, int tar)
{
    int i = 0;
    int j = nums.size() - 1;

    while (i <= j)
    {
        if (nums[i] + nums[j] == tar)
        {
          cout << i+1 << " " << j+1 << " ";
            return {i + 1, j + 1};
        }
        else if (nums[i] + nums[j] > tar)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 7, 11, 8};
    int target = 19;
    twosum(nums,target);
    return 0;
}