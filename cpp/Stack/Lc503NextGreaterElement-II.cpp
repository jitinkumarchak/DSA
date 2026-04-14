#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreater(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 0);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        while (s.size() > 0  && nums[s.top()] <= nums[i % n])
        {
            s.pop();
        }
        ans[i % n] = s.empty() ? -1 : nums[s.top()];
        s.push(i % n);
    }

    return ans;
}

int main()
{
    vector<int> nums = {2, 3, 1, 5, 7};
    vector<int> nums2 = nextGreater(nums);

    for (int val : nums2)
    {
        cout << val << " ";
    }

    return 0;
}