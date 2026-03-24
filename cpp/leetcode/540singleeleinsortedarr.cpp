#include <iostream>
#include <vector>
using namespace std;

int singleele(vector<int> A)
{
    int n = A.size();
    int st = 0;
    int end = n - 1;

    if (n == 1)
        return A[0];

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (mid == 0)
            return A[mid];
        if (mid == n - 1)
            return A[mid];
        if (A[mid] != A[mid - 1] && A[mid] != A[mid + 1])
            return A[mid];

        if (mid % 2 == 0)
        {
            if (A[mid] == A[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (A[mid] == A[mid - 1])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    vector<int> A = {1, 1, 3, 3, 4, 4, 5, 5,6,7,7};

    cout << singleele(A) << endl;

    return 0;
}