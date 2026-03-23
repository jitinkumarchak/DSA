#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1, 2};
    int bestbuy = arr[0];
    int maxprofit = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > bestbuy)
        {

            maxprofit = max(maxprofit, arr[i] - bestbuy);
        }
        bestbuy = min(bestbuy, arr[i]);
    }

    cout << maxprofit << endl;
    return 0;
}