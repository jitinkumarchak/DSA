#include <iostream>
#include <vector>
using namespace std;

void square(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n);

    int i = 0, j = n - 1, k = n - 1;

    while (i <= j)
    {
        if (abs(nums[i]) > abs(nums[j]))
        {
            ans[k] = nums[i] * nums[i];
            i++;
        }
        else
        {
            ans[k] = nums[j] * nums[j];
            j--;
        }
        k--;
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
}

int main()
{
    vector<int> nums = {-4, -1, 3, 9, 10};
     square(nums);

    return 0;
}