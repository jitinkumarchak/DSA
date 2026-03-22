#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> pair, int target)
{
    vector<int> ans;
    int n = pair.size();

    // for(int i = 0;i<n;i++){
    //     for(int j = i+1;j<n;j++){
    //         if(pair[i] + pair[j] == target){
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //         }
    //     }
    // }

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int pairsum = pair[i] + pair[j];
        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> pair = {1, 2, 3, 4, 5, 6, 7};
    int target = 11;

    vector<int> ans = pairsum(pair, target);
    cout << ans[0] << ", " << ans[1];

    return 0;
}