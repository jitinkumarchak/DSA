#include <iostream>
#include <vector>
using namespace std;

void mergesortedarr(vector<int> &A, vector<int> &B)
{
    int m = A.size();
    int n = B.size();
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[idx--] = A[i--];
        }
        else
        {
            A[idx--] = B[j--];
        }
    }

    while (j >= 0)
    {
        A[idx--] = B[j--];
    }
}

int main()
{

    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {2, 5, 6};

    mergesortedarr(A, B);

    return 0;
}