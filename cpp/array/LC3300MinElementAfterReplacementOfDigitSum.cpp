#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {98, 100};

    int ans = INT_MAX;

    for (int num : nums)
    {
        int sum = 0;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        ans = min(ans, sum);
    }

    cout << ans;
    return 0;
}