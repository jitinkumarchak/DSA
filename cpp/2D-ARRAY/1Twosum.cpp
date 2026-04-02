#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> Twosum(vector<int> &arr, int tar)
{
    unordered_map<int, int> m;
    vector<int> ans;

    for (int i = 0; i <= arr.size(); i++)
    {
        int first = arr[i];
        int sec = tar - first;

        if (m.find(sec) != m.end())
        {
            ans.push_back(i);
            ans.push_back(m[sec]);
        }
        m[first] = i;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return {};
}

int main()
{
    vector<int> arr = {2, 5, 7, 9};
    int tar = 12;

    Twosum(arr, tar);

    return 0;
}