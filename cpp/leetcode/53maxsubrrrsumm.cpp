#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    vector<int> nums = {1, -2, 5, 6, 7, -8};

    int maxsum = INT_MIN;
    int currsum = 0;

    for (int val : nums)
    {
        currsum += val;
        maxsum = max(currsum, maxsum);
        if (currsum < 0)
        {
            currsum = 0;
        }
    }
    cout << maxsum << endl;
    return 0;
}