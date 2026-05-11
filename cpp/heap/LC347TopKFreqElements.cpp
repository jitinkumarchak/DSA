#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 2, 2, 4, 4,4, 5, 6, 6};
    int k = 2;

    unordered_map<int, int> freq;

    for (int x : nums)
    {
        freq[x]++;
    }

    priority_queue<pair<int, int>> pq;

    for (auto it : freq)
    {
        pq.push({it.second, it.first});
    }

    vector<int> ans;

    while (k--)
    {
        ans.push_back(pq.top().second);
        pq.pop();
    }

    for (int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}