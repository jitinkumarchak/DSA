#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {4, 2, 3, 0, 3, 1, 2};
    int start = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (nums[start] == 0)
        {
            cout << "true";
            return 0;
        }
        else if (start - nums[i] >= 0 && start - nums[i] < n)
        {
            start = start - nums[i];
        }
        else if (start + nums[i] >= 0 && start + nums[i] < n)
        {
            start = start + nums[i];
        }
    }
    cout << "false";
    return 0;
}