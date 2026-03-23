#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n] = {1,2};
    int bestbuy = arr[0];
    int maxprofit = 0;

    for (int i = 0; i < n; i++)
    {
        bestbuy = min(bestbuy, arr[i]);
        maxprofit = max(maxprofit, arr[i] - bestbuy);
    }
    if(bestbuy == maxprofit){
        return 0;
    }
    cout << maxprofit << endl;
    return 0;
}