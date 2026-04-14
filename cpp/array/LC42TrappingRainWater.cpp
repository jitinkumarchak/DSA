#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &heights)
{
    int n = heights.size();

    vector<int> lmax(n, 0);
    vector<int> rmax(n, 0);

    lmax[0] = heights[0];
    rmax[n - 1] = heights[n - 1];

    // lmax
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(lmax[i-1], heights[i]);
    }

    // rmax
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i+1], heights[i]);
    }


    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(lmax[i], rmax[i]) - heights[i];
    }
    return ans;
}

int main()
{
    vector<int> heights = {4, 2, 0, 3, 2, 5};
    cout << trap(heights);

    return 0;
}