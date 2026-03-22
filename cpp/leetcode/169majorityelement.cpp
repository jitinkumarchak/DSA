#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// vector<int> majorityelement(vector<int> nums, int n)
// {

// }

int main()
{
    vector<int> nums = {1, 2, 2, 2, 1};
    int n = nums.size();

    int freq = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << "Majority element: " << ans << endl;
    return 0;
}