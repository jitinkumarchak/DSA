#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NextPermutation(vector<int> &A, int n)
{
    int pivot = -1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(A.begin(), A.end());
        for (int i = 0; i < n; i++)
        {
            cout << A[i] << " ";
        }
        return;
    }

    for (int i = n - 1; i > pivot; i--)
    {
        if (A[i] > A[pivot])
        {
            swap(A[i], A[pivot]);
            break;
        }
    }

    int i = pivot + 1, j = n - 1;
    while (i <= j)
    {
        swap(A[i++], A[j--]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

int main()
{
    vector<int> A = {1, 2, 3};
    int n = A.size();

    NextPermutation(A, n);

    return 0;
}