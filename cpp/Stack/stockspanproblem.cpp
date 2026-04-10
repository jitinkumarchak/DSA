#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// Time_complexity = O(n);
//  Space_Complexity = O(n);

int main()
{
    vector<int> price = {100, 80, 60, 70, 60, 75, 85};
    vector<int> ans(price.size(), 0);
    stack<int> s;

    for (int i = 0; i < price.size(); i++)
    { // O(n)
        while (s.size() > 0 && price[s.top()] <= price[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - s.top(); // i -prevhigh
        }
        s.push(i);
    }

    // print ans vals

    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}