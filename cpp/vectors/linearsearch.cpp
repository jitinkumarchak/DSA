#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {1, 2, 4, 5, 6, 78, 9};
    int target = 9;

    for (int i : nums)
    {
        if (nums[i] == target)
        {
            cout << "index : " << i << endl;
        }
    }

    return 0;
}