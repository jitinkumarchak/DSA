#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> heights = {1, 3, 6, 8, 4, 6, 2};
    int maxwater = 0;

    // brute force
    // int area = 0;
    // for (int i = 0; i < heights.size(); i++)
    // {
    //     for (int j = i + 1; j < heights.size(); j++)
    //     {
    //         int width = j - i;
    //         int height = min(heights[i], heights[j]);
    //         area = width * height;
    //     }
    //     maxwater = max(maxwater, area);
    // }

    // two pointer
    int left = 0;
    int right = heights.size() - 1;

    while (left < right)
    {
        int width = right - left;
        int ht = min(heights[left], heights[right]);
        int currwater = width * ht;
        maxwater = max(currwater, maxwater);

        heights[left] < heights[right] ? left++ : right--;
    }
    cout << maxwater << endl;

    return 0;
}