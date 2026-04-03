#include <iostream>
#include <vector>
using namespace std;
void getallsubsets(vector<int> &nums, vector<int> &ans, int i, vector<vector<int>> &allsubsets)
{
    if (i == nums.size())
    {
        allsubsets.push_back({ans});
        for (int val : ans)
        {
            cout << "[" << val << "]" << " ";
        }
        cout << endl;
        return;
    }

    ans.push_back(nums[i]);
    getallsubsets(nums, ans, i + 1, allsubsets);
    ans.pop_back();

    int idx = i + 1;
    if (idx < nums.size() && nums[idx] == nums[idx - 1])
    {
        idx++;
    }
    getallsubsets(nums, ans, i + 1, allsubsets);
}

int main()
{
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> allsubsets;
    vector<int> ans;

    getallsubsets(nums, ans, 0, allsubsets);

    return 0;
}