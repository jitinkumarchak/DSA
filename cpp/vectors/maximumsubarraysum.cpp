#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size] = {1, 4, 6, 7, -9};

    // to print all the possible sunarray's    formula = n(n+1)/2
    // for (int st = 0; st < size; st++)
    // {
    //     for (int end = st; end < size; end++)
    //     {
    //         for (int i = st; i <= end; i++)
    //         {
    //             cout << arr[i];
    //         }
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    // brute force approach
    int maxsum = INT_MIN;
    for (int st = 0; st < size; st++)
    {
        int currsum = 0;
        for (int end = st; end < size; end++)
        {
            currsum += arr[end];
            maxsum = max(currsum, maxsum);
        }
    }
    cout << "maximum subarray sum: " << maxsum;
    return 0;
}