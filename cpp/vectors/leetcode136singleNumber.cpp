#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 4, 5, 4, 2, 1};

    int ans = 0;

    for (int val : nums)
    {
        ans ^= val;
    }
    cout << ans << endl;
    return 0;
}