#include <bits/stdc++.h>
using namespace std;

int minJumps(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1)
        return 0;

    unordered_map<int, vector<int>> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]].push_back(i);
    }

    queue<int> q;

    vector<bool> vis(n, false);

    q.push(0);
    vis[0] = true;

    int steps = 0;

    while (!q.empty())
    {
        int sz = q.size();

        while (sz--)
        {
            int i = q.front();
            q.pop();

            if (i == n - 1)
            {
                return steps;
            }

            // i-1
            if (i - 1 >= 0 && !vis[i - 1])
            {
                vis[i - 1] = true;
                q.push(i - 1);
            }

            // i+1
            if (i + 1 < n && !vis[i + 1])
            {
                vis[i + 1] = true;
                q.push(i + 1);
            }

            // arr[i] == arr[j]
            for (int idx : mp[arr[i]])
            {
                if (!vis[idx])
                {
                    vis[idx] = true;
                    q.push(idx);
                }
            }

            // optimization
            mp[arr[i]].clear();
        }
        steps++;
    }
    return -1;
}

int main()
{
    vector<int> arr = {100, -23, -23, 404, 100, 23, 23, 23, 3, 404};
    cout << minJumps(arr);

    return 0;
}