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
        lmax[i] = max(lmax[i - 1], heights[i]);
    }

    // rmax
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(rmax[i + 1], heights[i]);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += min(lmax[i], rmax[i]) - heights[i];
    }
    return ans;
}

// twopointer approach

int trap2(vector<int> &heights)
{
    int n = heights.size(), l = 0, r = n - 1, ans = 0, lmax = 0, rmax = 0;

    while(l < r){
        lmax = max(lmax,heights[l]);
        rmax = max(rmax, heights[r]);

        if(lmax < rmax){
            ans += lmax - heights[l];
            l++;
        }else{
            ans += rmax - heights[r];
            r--;
        }
    }
    return ans;
}

int main()
{
    vector<int> heights = {4, 2, 0, 3, 2, 5};
    cout << trap(heights) << " ";
    cout << trap2(heights);

    return 0;
}