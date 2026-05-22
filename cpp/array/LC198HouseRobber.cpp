#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1};

    int n = nums.size();

    // max money that can be robbed from the houses if adjacent houses cannot be robbed
    vector<int> dp(n, 0);
    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for (int i = 2; i < n; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + nums[i]);
    }

    cout << dp[n - 1] << endl;

    int money = 0;
    for (int i = 0; i < n; i += 2)
    {
        money += nums[i];
    }
    int money2 = 0;
    for (int i = 1; i < n; i += 2)
    {
        money2 += nums[i];
    }

    int ans = max(money, money2);

    cout << ans << endl;

    // what if the nums are {2,1,1,2} then the above approach will fail as we can rob the first and the last house

    // then how should be approach be then we can use the dp approach as mentioned above and we can also optimize the space complexity by using two variables to store the previous two values of dp array

    int prev2 = nums[0];
    int prev1 = max(nums[0], nums[1]);
    int curr = 0;

    for (int i = 2; i < n; i++)
    {
        curr = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    cout << curr << endl;

    return 0;
}