#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3, 4, 5, 1, 2};

    int n = nums.size();

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
    }

    cout << (count <= 1 ? "true" : "false") << endl;

    return 0;
}