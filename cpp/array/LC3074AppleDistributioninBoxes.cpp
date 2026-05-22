#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> apples = {5, 5, 5};
    vector<int> capacity = {2, 4, 2, 7};

    int n = apples.size();
    int m = capacity.size();

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        total += apples[i];
    }

    sort(capacity.begin(), capacity.end());

    // minimum number of boxes required to distribute all the apples
    int ans = 0;
    for (int i = m - 1; i >= 0; i--)
    {
        if (total <= 0)
        {
            break;
        }
        total -= capacity[i];
        ans++;
    }
    cout << ans << endl;

    return 0;
}