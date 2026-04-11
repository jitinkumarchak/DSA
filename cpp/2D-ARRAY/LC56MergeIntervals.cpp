#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> &intervals)
{
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);

    for(int i = 0; i< intervals.size(); i++){
        if(intervals[i][0] <= ans.back()[1]){
            ans.back()[1] = max(ans.back()[1],intervals[i][1]);
        }else{
            ans.push_back(intervals[i]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 7}, {8, 10}, {12, 15}};
    vector<vector<int>> ans = merge(intervals);
    for(auto &interval : ans){
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }

    return 0;
}