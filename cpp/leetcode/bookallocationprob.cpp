#include <iostream>
#include <vector>
using namespace std;

bool isvalid(vector<int> &arr, int n, int m, int maxpageallowed)
{
    int students = 1,pages = 0;

    for(int i =0;i<n;i++){
        if(arr[i] > maxpageallowed){
            return false;
        }

        if(pages +arr[i] <= maxpageallowed ){
            pages += arr[i];
        }else{
            students++;
            pages = arr[i];
        }
    }

    return students > m ? false : true;
}

int allocatebooks(vector<int> &arr,int n,int m ){  // O(logN * n)
    if (m > n)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)   // sum of all n's in arr  //O(n)
    {
        sum += arr[i];
    }

    int ans = -1;
    int st = 0, end = sum;   //range of all possible ans
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isvalid(arr, n, m, mid))
        {                              // left
            ans = mid;
            end = mid - 1;
        }
        else
        {                              //right
            st = mid + 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> A = {15,17,20 };
    int n = A.size();
    int m = 2;

    cout << allocatebooks(A,n,m);
    return 0;
}