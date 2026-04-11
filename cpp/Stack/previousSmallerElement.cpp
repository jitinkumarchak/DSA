#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// TC: O(n); SC: O(n);

vector<int> previoussmallerelement(vector<int> &arr)
{
    vector<int> ans(arr.size(), 0);
    stack<int> s;

    for (int i = 0; i < arr.size(); i++) // O(n)
    {
        while (s.size() > 0 && s.top() >= arr[i]) // O(2n)
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = s.top();
        }

        s.push(arr[i]);
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 5, 6, 7};
    vector<int> ans = previoussmallerelement(arr);
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}