#include <iostream>
#include <vector>

using namespace std;

double median(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    int total = m + n;
    int target1 = (total - 1) / 2;
    int target2 = total / 2;

    int i = 0;
    int j = 0;
    int index = 0;
    int first = 0;
    int second = 0;

    while (index <= target2)
    {
        int value;
        if (i < m && (j >= n || nums1[i] <= nums2[j]))
        {
            value = nums1[i];
            i++;
        }
        else
        {
            value = nums2[j];
            j++;
        }

        if (index == target1)
        {
            first = value;
        }
        if (index == target2)
        {
            second = value;
        }
        index++;
    }

    return (first + second) / 2.0;
}

int main()
{
    vector<int> nums1 = {2, 2, 4, 4};
    vector<int> nums2 = {2, 2, 2, 4, 4};

    int m = nums1.size();
    int n = nums2.size();

    cout << median(nums1, nums2, m, n);

    return 0;
}