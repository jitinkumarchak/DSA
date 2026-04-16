#include <iostream>
#include <vector>
#include <deque>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &nums, int k)
{
    deque<int> dq;
    vector<int> ans;

    // 1st window
    for (int i = 0; i < k; i++)
    {
        while (dq.size() > 0 && nums[dq.back()] <= nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (int i = k; i < nums.size(); i++)
    {
        ans.push_back(nums[dq.front()]);

        // remove not part of curr wind
        while (dq.size() > 0 && dq.front() <= i - k)
        {
            dq.pop_front();
        }

        // remove teh smaller vals
        while (dq.size() > 0 && nums[dq.back()] <= nums[i])
        {
            dq.pop_back();
        }

        dq.push_back(i);
    }
    ans.push_back(nums[dq.front()]);

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return ans;
}

int main()
{
    vector<int> nums = {1, 3, -1, 3, 4, 5, 5, 6, 7};
    int k = 3;
    maxSlidingWindow(nums, k);
    return 0;
}