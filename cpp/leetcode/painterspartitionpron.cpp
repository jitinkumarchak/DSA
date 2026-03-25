#include <iostream>
#include <vector>
using namespace std;

bool ispossible(vector<int> &arr, int n, int m, int maxallowedtime)
{ // O(n)
    int painters = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + time <= maxallowedtime)
        {
            time += arr[i];
        }
        else
        {
            painters++;
            time = arr[i];
        }
    }
    return painters <= m;
}

int maximumtime(vector<int> &arr, int n, int m)
{
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < n; i++)
    { // O(n)
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while (st <= end)
    { // log(sum) * n
        int mid = st + (end - st) / 2;

        if (ispossible(arr, n, m, mid))
        { // left
            ans = mid;
            end = mid - 1;
        }
        else
        { // right
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr = {40, 30, 10, 20};
    int n = 4;
    int m = 2;

    cout << maximumtime(arr, n, m) << endl;
    return 0;
}