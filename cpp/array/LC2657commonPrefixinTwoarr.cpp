#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3, 6, 7};

    int n = nums1.size();

    unordered_map<int, int> freq;
    vector<int> ans;

    int common = 0;

    for (int i = 0; i < n; i++)
    {
        freq[nums1[i]]++;

        if (freq[nums1[i]] == 2)
        {
            common++;
        }

        freq[nums2[i]]++;

        if (freq[nums2[i]] == 2)
        {
            common++;
        }

        ans.push_back(common);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}