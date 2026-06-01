#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> cost = {2, 5, 3, 8};
    int n = cost.size();
    int sum = 0;

    sort(cost.begin(), cost.end(), greater<int>());

    for (int i = 0; i < n; i++)
    {
        if (i % 3 != 2)
        {
            sum += cost[i];
        }
    }

    cout << sum << endl;

    return 0;
}