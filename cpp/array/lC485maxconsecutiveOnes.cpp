#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> nums = {1, 0, 1, 1, 1, 0};

    int count = 0, maxi = 0;

    for (int i : nums)
    {
        if (i == 1)
        {
            count++;
            maxi = max(maxi, count);
        }
        else
        {
            count = 0;
        }
    }
    cout << maxi;

    return 0;
}