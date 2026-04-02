#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> foursum(vector<int> &nums, int tar)
{
    int n = nums.size();
    vector<vector<int>> ans;

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < n;)
        {

            int k = j + 1, l = n - 1;
            while (k < l)
            {
                int sum = nums[i] + nums[j] + nums[k] + nums[l];
                if (sum < tar)
                {
                    k++;
                }
                else if (sum > tar)
                {
                    l--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;
                    while (k < l && nums[k] == nums[k - 1])
                        k++;
                }
            }
            j++;
            while (j < n && nums[j] == nums[j - 1])
                j++;
        }
    }
    for (auto &val : ans)
    {
        cout << "[" << val[0] << ", " << val[1] << ", " << val[2] << "," <<  val[3] << "] ";
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 2, 2, 2};
    int tar = 8;

    foursum(nums, tar);

    return 0;
}