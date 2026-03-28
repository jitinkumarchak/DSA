#include <iostream>
#include <vector>
using namespace std;

void freqcount(vector<int> &arr, int n)
{
    //     int count0= 0, count1 = 0, count2 = 0;

    //     for(int i =0 ; i<n;i++){
    //         if(arr[i] == 0) count0++;
    //         else if (arr[i] == 1) count1++;
    //         else count2++;
    //     }

    //     int idx = 0;
    //     for(int i=0;i<count0;i++){
    //      arr[idx++] = 0;
    //     }
    //     for (int i = 0; i < count1; i++)
    //     {
    //         arr[idx++] = 1;
    //     }
    //     for (int i = 0; i < count2; i++)
    //     {
    //         arr[idx++] = 2;
    //     }
    // return idx;
    int mid = 0, low = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for(int i= 0;i<n;i++){
        cout << arr[i] << " ";
    }
}

int main()
{

    vector<int> arr = {0, 1, 2, 0, 2, 1};
    int n = arr.size();

    freqcount(arr, n);

    return 0;
}